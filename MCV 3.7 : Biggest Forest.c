/*
Imagine the field is a 2D plane. Each cell is either water 'W' or a tree 'T'.
A forest is a collection of connected trees. Two trees are connected if they share a side i.e. if they are adjacent to each other.

Your task is, given the information about the field, print the size of the largest forest.

Size of a forest is the number of trees in it. See the sample case for clarity

Input
First line contains the size of the matrix N.
The next N lines contain N characters each, either 'W' or 'T'.

Output
Print the size of the biggest forest.

Sample Input 0

5
TTTWW
TWWTT
TWWTT
TWTTT
WWTTT
Sample Output 0

10
Explanation 0

The forest on the top left has 6 trees but the forest on the bottom right is bigger with 10 trees
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char m[1005][1005];
int n,c=0,max;
void fun(int i,int j){
    if(i<0||i>=n||j<0||j>=n||m[i][j]!='T')return;
    m[i][j]='W';
    c++;
    fun(i-1,j);
    fun(i,j+1);
    fun(i+1,j);
    fun(i,j-1);
}
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%s",m[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[i][j]=='T'){
                c=0;
                fun(i,j);
                if(max<c)max=c;
            }
        }
    }
    printf("%d",max);
    return 0;
}
