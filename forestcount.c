/*
Just like in the previous problem, imagine the field is a 2D plane. Each cell is either water 'W' or a tree 'T'. A forest is a collection of connected trees. Two trees are connected if they share a side i.e. if they are adjacent to each other.

Your task is, given the information about the field, print the number of forests.

See the sample case for clarity

Input
First line contains the size of the matrix N.
The next N lines contain N characters each, either 'W' or 'T'.

Output
Print the number of forests.

Sample Input 0

5
TTTWW
TWWTT
TWWTT
TWTTT
WWTTT
Sample Output 0

2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char m[1005][1005];
int n,c=0;
void fun(int i,int j){
    if(i<0||i>=n||j<0||j>=n||m[i][j]!='T')return;
    m[i][j]='W';
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
                c++;
                fun(i,j);
            }
        }
    }
    printf("%d",c);
    return 0;
}
