Alice and Bob are very good friends. They keep on playing some strange games. Today Alice came up with a new game, in which each player gets N cards at the start. 
Each card has it's value printed on it.The game proceeds as each player chooses a random card and shows it's value. The player having card with higher value wins. 
As Alice came up with this game, he wants to ensure his win. So he starts to increase value of some cards using an algorithm.
To increase the value of a card by 1, the running time of algorithm is K seconds.

Find the minimum running time of algorithm, ensuring the win of Alice.

INPUT FORMAT
First line of input contains an integer T denoting the number of TestCases.
First line of Each testcase contains two Integers N and K.
Next two lines of each TestCase contains N integers, each denoting value of cards of Alice and Bob respectively.

OUTPUT FORMAT
Print a single line for each TestCase, running time of algorithm to ensure the win for Alice.

SAMPLE INPUT
3
5 3
8 9 10 23 4
7 9 2 3 13
6 8
8 99 23 1 3 0
9 32 22 45 3 2
3 2
1 1 0
5 8 9

SAMPLE OUTPUT
75
1560
56

EXPLANATION
There are 3 TestCases.
In 1st TestCase there are 5 cards and the time required to increase the value of a card by one is 3.
Initial values on Alice's cards are 8,9,10,23,4.
If he converts the the above array into 14,14,14,23,14. Then it's guranteed that he will win with minimum running time of algorithm.
For this conversion the running time of algorithm for:

1st element :- 6*3 = 18sec
2nd element :- 5*3 = 15sec
3rd element :- 4*3 = 12sec
4th element :- 0*3 = 0seC
5th element :- 10*3 = 30sec
Hence the total running time of algorithm for 1st TestCase is 18+15+12+0+30=75.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int T,j;
    cin>>T;
    for (j=0;j<T;j++)
    {
        long long int n,k;
        cin>>n;
        cin>>k;
        long long int a[n],b[n],i,c,sum=0,mul,sub,max;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(c=0;c<n;c++)
        {
            cin>>b[c];
        }
        max=b[0];
        for(c=0;c<n;c++)
        {
        if(max<b[c])
            max=b[c];   
        }
       for(i=0;i<n;i++)
       {
           if((max+1)>a[i])
           {
           sub=(max+1)-a[i];
           mul=sub*k;
           sum=sum+mul;
           }
       }
        cout<<sum<<endl;
    }
    return 0;
}
