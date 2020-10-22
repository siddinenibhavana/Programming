//Count of permutations such that sum of K numbers from given range is even
#include<stdio.h>
#include<stdio.h>
int main(){
    int a,b,e=0,o=0,es=1,os=0,pe,po;
    scanf("%d %d",&a,&b);
    int i,k;
    scanf("%d",&k);
    for(i=a;i<=b;i++)
    {
    if(i%2==0){
        e++;
    }
    else{
        o++;
    }
        
    }
    for(int i=0;i<k;i++)
    {
    pe=es;
    po=os;
    es=pe*e+po*o;
    os=pe*o+po*e;
        
    }
    printf("%d",es);
return 0;
}