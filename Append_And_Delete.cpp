You have a string of lowercase English alphabetic letters. You can perform two types of operations on the string:
Append a lowercase English alphabetic letter to the end of the string.
Delete the last character in the string. Performing this operation on an empty string results in an empty string.
Given an integer, k, and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. 
If it's possible, print Yes. Otherwise, print No.

For example, strings s=[a,b,c] and t=[d,e,f]. Our number of moves,k=6 . To convert s to t, we first delete all of the characters in 3 moves. Next we add each of the characters of t in order.
On the 6th move, you will have the matching string. If there had been more moves available, they could have been eliminated by performing multiple deletions on an empty string.
If there were fewer than 6 moves, we would not have succeeded in creating the new string.

FUNCTION DESCRIPTION
Complete the appendAndDelete function in the editor below. It should return a string, either Yes or No.
appendAndDelete has the following parameter(s):
s: the initial string
t: the desired string
k: an integer that represents the number of operations

INPUT FORMAT
The first line contains a string s, the initial string.
The second line contains a string t, the desired final string.
The third line contains an integer k, the number of operations.

OUTPUT FORMAT
Print Yes if you can obtain string t by performing exactly k operations on s. Otherwise, print No.

SAMPLE INPUT 0
hackerhappy
hackerrank
9

SAMPLE OUTPUT 0
Yes

Explanation 0
We perform 5 delete operations to reduce string s to hacker. Next, we perform 4 append operations (i.e., r, a, n, and k), to get hackerrank.
Because we were able to convert s to t by performing exactly k=9 operations, we print Yes.

SAMPLE INPUT 1
ashley
ash
2

SAMPLE OUTPUT 1
No

EXPLANATION 1
To convert ashley to ash a minimum of 3 steps are needed. Hence we print No as answer.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,i;
    string s,t;
    cin>>s>>t>>k;
    l=s.size()+t.size();
    for(i=0;s[i]==t[i];i++);
    if((l-i*2<=k && l%2==k%2) || l<k)
    cout<<"Yes";
    else
    cout<<"No";
return 0;
}

EXPLANATION TO THE CODE
First, we try to find the minimum number of operations needed. 
For this, we check how large the largest common prefix of the two strings is; eg. if we have "hello" and "hellno", our largest common prefix is "hell".
We compute the length of this prefix by for(i = 0; s[i] == t[i]; i++);.
If we didn't have such a prefix, we'd have to first delete s.size() characters, then append t.size() characters (s.size() + t.size() = L steps in total). 
However, since we have a prefix of length i, we can skip i deletions and i additions. Therefore, we need at least L - 2*i operations in total. 
If k is smaller than that, we can return early. L <= k + i*2 checks this.
Now, if (k - (L - 2 * i)) % 2 == 0 (which is equivalent to k%2 == L%2), we can first do L - 2*i operations to get the string t, and then just append a character 
and immediately remove it. Since (k - (L - 2 * i)) % 2 == 0 means that the difference between k and L - 2*i is even, this is always possible.
There is one more special case; since remove("") == "", if we have k >= L, we can just do s.size() deletions, then another k - L deletions, and t.size() additions.
In this special case, we can always find a way to convert s to t using k operations.
