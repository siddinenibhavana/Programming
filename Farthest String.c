/*We define the Palindromic Distance of a String as the minimum number of characters that need to be modified in order to turn the String into a palindrome.

For example :

"cook" -> "cooc" (Palindrome),
Hence Distance("cook") = 1.

"fluffy" -> "flufff" -> "ffufff" -> "ffffff" (Palindrome),
Hence Distance("fluffy") = 3.

Now, you are given N number of strings, and your task is to find out which string has the farthest Distance from being a palindrome and print it.

INPUT
First line contains number of strings N.
Next N lines each contain one string.

OUTPUT
Print one string that is the farthest out of all strings from being a palindrome.

CONSTRAINTS
1 ≤ N ≤ 103
Each string has length of atmost 1000
Strings consists of lowercase english characters only

Sample Input 0

7
philosopher
chamber
prisoner
goblet
phoenix
halfbloodprince
deathlyhallows
Sample Output 0

halfbloodprince
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    //n=no.of strings,1006 the max length
    char ch[N][1006];
    for(int i=0;i<N;i++){
        scanf("%s",ch[i]);
    }
    int m=0,i=0;
    for(int j=0;j<N;j++){
        int l=0,r=strlen(ch[j])-1,c=0;
            while(l<r){
                if(ch[j][l]!=ch[j][r])c++;
                l++;
                r--;
            }
        if(m<c){
            m=c;
            i=j;
        }
    }
    printf("%s",ch[i]);
    return 0;
}
