#include <stdio.h>
/*among all the single digit numbers only 1 and 7 are happy.
so if at any step in the iterations of sum if we are getting 1 or 7 then the number is happy*/
int happy(int n){/*happy function to determine if the number is happy or not?*/
    if((n==1)||(n==7))/*if the input itself if a single digit directly checking whether it is happy or not(1 or7)*/
        return 1;
    int x=n,sum=n;/*initializing x and sum*/
    while(sum>9){/*loop executes only if sum is a double digit*/
        sum=0;
        while(x>0){/*calculating square sum*/
            int d=x%10;
            sum=sum+d*d;
            x=x/10;
        }
        if(sum==1)/*if sum is euqal to 1 happy so true*/
           return 1;
        x=sum; /*else update x to sum val*/
    }
    if(sum==7)/*if sum is 7 then true else false*/
        return 1;
    return 0;
}
int main()
{
    int n;/*scanning input*/
    scanf("%d",&n);
    if(happy(n)==1)/*if function returns true then number is happy if not then the number is not a happy number*/
       printf("Yes");
    else
       printf("No");

    return 0;
}
