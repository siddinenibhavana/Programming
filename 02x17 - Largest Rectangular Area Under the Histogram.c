/*
You are given a histogram that consists of N vertical bars.
The ith bar from the left has height Hi.

Your task is to calculate the maximum area of any rectangle that lies completely within this histogram.

See the sample test case for clarity.

INPUT

First line contains the size of histogram N. (1 <= N <= 106)
Secone line contains N space separated integers denoting the height of the histogram bars. (1 <= Hi <= 106)

OUTPUT

Print one integer equal to the maximum area of any rectangle within the histogram.

Sample Input 0

7
6 2 5 4 5 1 6
Sample Output 0

12
Explanation 0

image
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long s[1000000],a[1000000],max=0,area=0;
int top=-1;
int main() {
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%ld",&a[i]);
    long int i=0;
    for(i=0;i<n;){
        if(top==-1||a[s[top]]<a[i])
        {
            s[++top]=i++;
        }
        else{
            long x=s[top--];
            area=a[x]*(top==-1?i:(i-s[top]-1));
            if(area>max)max=area;
        }
    }
    while(top!=-1)
    {
        long x=s[top--];
        area=a[x]*(top==-1?i:(i-s[top]-1));
        if(area>max)max=area;
    }
    printf("%ld",max);
    return 0;
}
