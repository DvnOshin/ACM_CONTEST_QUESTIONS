Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. 
On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.
What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered.
It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

INPUT FORMAT
The input contains three positive integer numbers in the first line: n, m and a

OUTPUT FORMAT
Write the needed number of flagstones.

SAMPLE INPUT
6 6 4

SAMPLE OUTPUT
4
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,mul;
    cin>>n;
    cin>>m;
    cin>>a;
    i=n/a;
    j=m/a;
    if((i*a)!=n)
    {
        i++;
    }
    if((j*a)!=m)
    {
        j++;
    }
    mul=i*j;
    cout<<mul;
    return 0;
}
