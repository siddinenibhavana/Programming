/*An antidote has been developed for the ebola crisis. This antidote is conjuctive, i.e. If it is given to a person, then the person who is connected to this person will also be cured. Two people X and Y are connected if X and Y are adjacent or if there exists a person Z such that X and Z are connected and Z and Y are connected.

So, for every connected group of people we need one antidote. This antidotes strength must be equal to the highest infected person in the group.

Your task is to calculate the number of antidotes of different strengths needed.

Input
First line contains the size of the grid N.
Next contains the NxN grid.

Output
Print 4 integers, the number of antidotes required of strength 2, 3, 4 and 5.

Sample Input 0

5
0 0 0 1 5
1 1 0 1 1
3 1 0 0 0
1 1 0 1 1
4 4 0 3 1
Sample Output 0

0 1 1 1*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int m[1005][1005],b[6],n,max=0;
void findmax(int i,int j)
{
    if(i<0||j<0||i>=n||j>=n||m[i][j]==0)return;
    if(max<m[i][j])max=m[i][j];
    m[i][j]=0;
    findmax(i-1,j-1);
    findmax(i-1,j);
    findmax(i-1,j+1);
    findmax(i,j+1);
    findmax(i+1,j+1);
    findmax(i+1,j);
    findmax(i+1,j-1);
    findmax(i,j-1);
}
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(m[i][j]!=0)
            {
                max=0;  findmax(i,j); b[max]++;
            }
        }
    }
    for(int i=2;i<6;i++)printf("%d ",b[i]);
    return 0;
}
