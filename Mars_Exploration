Sami's spaceship crashed on Mars! She sends a series of SOS messages to Earth for help.
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string,s, determine how many
letters of Sami's SOS have been changed by radiation.
For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.

FUNCTION DESCRIPTION
Complete the marsExploration function in the editor below. It should return an integer representing the number of letters changed during transmission.
marsExploration has the following parameter(s):
s: the string as received on Earth

INPUT FORMAT
There is one line of input: a single string,s.
Note: As the original message is just SOS repeated n times, s's length will be a multiple of 3.

OUTPUT FORMAT
Print the number of letters in Sami's message that were altered by cosmic radiation.

SAMPLE INPUT
SOSSPSSQSSOR

SAMPLE OUTPUT
3

EXPLANATION
s = SOSSPSSQSSOR, and signal length |s|=12. Sami sent 4 SOS messages (i.e.:12/3 = 4).
Expected signal: S O S S O S S O S S O S 
Recieved signal: S O S S P S S Q S S O R
Difference:              X     X       X
We print the number of changed letters.

SAMPLE INPUT 1
SOSSOSSOS

SAMPLE OUTPUT 1
0

EXPLANATION 1
Since no character is altered, we print 0.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************************************************************************

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,d,str,count=0;
    string s;
    cin>>s;
    string s1="";
    str=s.size();
    d=str/3;
    for(i=0;i<d;i++)
    {
    s1=s1+"SOS";
    }
    for(i=0;i<s.size();i++)
    {
    if(s1[i]!=s[i])
    {
    count++;
    }
    }
    cout<<count;
    return 0;
}
