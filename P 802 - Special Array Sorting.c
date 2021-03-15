/*
Problem
Submissions
image

Input Format

image

Constraints

image

Output Format

image

Sample Input 0

2
4
1 0 3 2
3
2 1 0
Sample Output 0

Yes
No
Explanation 0

image
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t; scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1] && a[i]-a[i+1]==1)
            {
                int c=a[i];a[i]=a[i+1];a[i+1]=c;
            }
            else if(a[i]>a[i+1]&&a[i]-a[i+1]>1)
            {
                f=1;break;
            }
        }
        if(f==0)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
