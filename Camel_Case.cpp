Alice wrote a sequence of words in CamelCase as a string of letters,s, having the following properties:
.It is a concatenation of one or more words consisting of English letters.
.All letters in the first word are lowercase.
.For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given s, print the number of words in  on a new line.
For example,s=oneTwoThree. There are 3 words in the string.

FUNCTION DESCRIPTION
Complete the camelcase function in the editor below. It must return the integer number of words in the input string.
camelcase has the following parameter(s):
s: the string to analyze

INPUT FORMAT
A single line containing string s.

OUTPUT FORMAT
Print the number of words in string s.

SAMPLE INPUT
saveChangesInTheEditor

SAMPLE OUTPUT
5

EXPLANATION
String s contains five words:
1. save
2. Changes
3. In
4. The
5. Editor
Thus, we print 5 on a new line.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*********************************************************************************************************************************************************************************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=1,i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
    if(isupper(s[i]))
    {
        count++;
    }
    }
    cout<<count;
    return 0;
}
