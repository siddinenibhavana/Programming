/*
Given a number of dates, sort them in such a way that the date that corresponds to the earliest day comes first and the date that corresponds to the latest day comes last.

Input Format

First line contains N, the number of dates.
Next N lines contain one date each in the following format :
DD MM YYYY.
The date will be three integers separated by a space where the first integer is the day, the second integer is the month and the third is the year.

Constraints

1 <= N <= 100
It is guaranteed that the date will be a valid date.

Output Format

Output N lines. Each line must contain one date. The dates must appear in a sorted format.

Sample Input 0

4
9 8 1996
31 4 1995
30 4 1996
25 12 1997
Sample Output 0

31 4 1995
30 4 1996
9 8 1996
25 12 1997
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct date{
    int dd;
    int mm;
    int yy;
};
int compare(struct date *a,struct date *b){
    if(a->yy<b->yy)
        return -1;
    else if(a->yy>b->yy)
        return 1;
    else if(a->mm<b->mm)
        return -1;
    else if(a->mm>b->mm)
        return 1;
    else
        return a->dd - b->dd;
}
int main() {
    int n;
    scanf("%d",&n);
    struct date a[n];
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a[i].dd,&a[i].mm,&a[i].yy);
    }
    qsort(a,n,sizeof(struct date),compare);
    for(int i=0;i<n;i++){
        printf("%d %d %d\n",a[i].dd,a[i].mm,a[i].yy);
    }
    return 0;
}
