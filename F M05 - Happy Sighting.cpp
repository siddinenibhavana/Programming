/*
There are n pictures delivered for the new exhibition. The i-th painting has beauty ai. We know that a visitor becomes happy every time he passes from a painting to a more beautiful one.

We are allowed to arranged pictures in any order. What is the maximum possible number of times the visitor may become happy while passing all pictures from first to last. In other words, we are allowed to rearrange elements of array a in any order. What is the maximum possible number of indices i (1 <= i <= n - 1), such that ai + 1 > ai.

Input Format

The first line of the input contains integer n — the number of painting.

The second line contains the sequence a1, a2, ..., an, where ai means the beauty of the i-th painting.

Constraints

1 <= n <= 1000
1 <= ai <= 1000

Output Format

Print one integer — the maximum possible number of neighbouring pairs, such that ai + 1 > ai, after the optimal rearrangement.

Sample Input 0

4
200 100 100 200
Sample Output 0

2
Explanation 0

Sample Ordering that gives answer 2 :

100 200 100 200
*/
#include<bits/stdc++.h>

using namespace std;

int k=0,n,i,a,arr[1005];
int main()
{
 cin>>n;
 for(i=0;i<n;i++)
 {
 cin>>a;
 arr[a]++;

 k=max(k,arr[a]);

 }
 cout<<n-k;
}
