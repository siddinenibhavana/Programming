/*
Level order traversal of a tree is obtained by doing a breadth first search on it.

You are given a tree with N nodes and N-1 edges. Each edge is bidirectional and connects two nodes.

The nodes of the tree are indexed from 1 to N and you can consider 1 to be the root of the tree.

You are given an integer d. Your task is to print the number of nodes that are present at the dth level of the tree.

It is guaranteed that atleast one node will be present at the dth level.

Input

First line contains n the number of nodes
Next n - 1 lines each contain two integers u and v such that there is an edge between u and v
Last line contains the integer d

Output

Print one number, the count of nodes at dth level of the tree

Sample Input 0

20
11 1
1 2
13 3
15 4
17 5
11 6
2 7
1 8
15 9
4 10
15 12
5 13
2 14
17 15
15 16
11 17
15 18
9 19
16 20
2
Sample Output 0

3
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int m[1005][1005],b[6][2];
int fun(int i, int j, int n)
{
    int c=0;
    if(i>0&&j>0&&m[i-1][j-1]==1){c++; m[i-1][j-1]=0;}
    if(i>0&&m[i-1][j]==1){c++; m[i-1][j]=0;}
    if(i>0&&j<n-1&&m[i-1][j+1]==1){c++; m[i-1][j+1]=0;}
    if(j>0&&m[i][j-1]==1){c++; m[i][j-1]=0;}
    if(j<n-1&&m[i][j+1]==1){c++; m[i][j+1]=0; }
    if(i<n-1&&j<n-1&&m[i+1][j+1]==1){c++; m[i+1][j+1]=0; }
    if(i<n-1&&m[i+1][j]==1){c++;m[i+1][j]=0;}
    if(i<n-1&&j>0&&m[i+1][j-1]==1){c++;m[i+1][j-1]=0; }
    return c;
}
int main() {
    int n; scanf("%d",&n);
    for(int i=0;i<n; i++){
        for(int j =0; j<n; j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(int k=5;k>=2;k--){
        for(int i=0;i<n;i++){
            for(int j =0; j<n; j++){
                if(m[i][j]==k){
                    b[k][0]++;
                    b[k][1]+=fun(i,j,n);
                }
            }
        }
    }
    for(int i=2;i<6;i++)printf("%d ",b[i][0]);
    printf("\n");
    for(int i=2;i<6; i++) printf("%d ", b[i][1]);
    return 0;
}
