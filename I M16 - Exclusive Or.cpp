/*
Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110
*/
#include <bits/stdc++.h>
using namespace std;
void addZeros(string& str, int n){
    for (int i = 0; i < n; i++){
        str = "0" + str;
    }
}
string getXOR(string a, string b){
    int aLen = a.length();
    int bLen = b.length();
    if (aLen > bLen) {
        addZeros(b, aLen - bLen);
    }
    else if (bLen > aLen) {
        addZeros(a, bLen - aLen);
    }
    int len = max(aLen, bLen);
    string res = "";
    for (int i = 0; i < len; i++){
        if (a[i] == b[i])
            res += "0";
        else
            res += "1";
    }
    return res;
}
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout << getXOR(a, b);
    return 0;
}

