/*
You are given an array A[N] of size N.
We define a 7-Divisible Pair as a pair of integers (i,j) such that Ai + Aj is divisible by 7.
Formally, a pair of integers (i,j) is a 7-Divisible pair if ( Ai + Aj ) % 7 = 0.
Your task is to find the total number of 7-Divisible pairs from the given array.

INPUT

First line contains N the size of the array. (1 ≤ N ≤ 105).
Second line contains the array elements that all lie between 1 and 105.

OUTPUT

Output a single integer that denotes the number of pairs divisible by 7.

Sample Input 0

5
9 3 7 4 14
Sample Output 0

2
*/

#include <bits/stdc++.h>
using namespace std;
int countKdivPairs(int A[], int n, int K)
{
    int f[K] = { 0 };
    for (int i = 0; i < n; i++)
        ++f[A[i] % K];
    int sum = f[0] * (f[0] - 1) / 2;
    for (int i = 1; i <= K / 2 && i != (K - i); i++)
        sum += f[i] * f[K - i];
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int K = 7;
    cout << countKdivPairs(A, n, K);
 
    return 0;
}
