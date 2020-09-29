A modified Kaprekar number is a positive whole number with a special property. If you square it, then split the number into two integers and sum those integers,
you have the same value you started with. Consider a positive whole number n with d digits. We square n to arrive at a number that is either 2*d digits long or (2*d)-1 digits long.
Split the string representation of the square into two parts, l and r. The right hand part, r must be d digits long. The left is the remaining substring. 
Convert those two substrings back to integers, add them and see if you get n.
For example, if n=5, d=1 then n^2=25. We split that into two strings and convert them back to integers 2 and 5. We test 2+5=7 != 5, so this is not a modified Kaprekar number. 
If n=9, still d=1, and n^2=81. This gives us 1+8=9, the original n.

Note: r may have leading zeros.
Given two positive integers p and q where p is lower than q, write a program to print the modified Kaprekar numbers in the range between p and q, inclusive.

FUNCTION DESCRIPTION
Complete the kaprekarNumbers function in the editor below. It should print the list of modified Kaprekar numbers in ascending order.
kaprekarNumbers has the following parameter(s):
p: an integer
q: an integer

INPUT FORMAT
The first line contains the lower integer limit p.
The second line contains the upper integer limit q.
Note: Your range should be inclusive of the limits.

OUTPUT FORMAT
Output each modified Kaprekar number in the given range, space-separated on a single line. If no modified Kaprekar numbers exist in the given range, print INVALID RANGE.

SAMPLE INPUT
1
100

SAMPLE OUTPUT
1 9 45 55 99

EXPLANATION
1,9,45,55,and 99 are the Kaprekar Numbers in the given range.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
long long int p,q,i,j,k,m,s,flag=0; 
cin>>p>>q;
for( i=p;i<=q;i++)
{ 
int l=0; 
j=i;
while(j>0)
{ 
  l++;
  j=j/10;
}
k=i*i;
m = pow(10,l);
s = k/m + k%m;
if(s == i)
{
    cout<<i<<" ";
    flag ++;
}
}
if (flag == 0)
{
    cout<<"INVALID RANGE";
}
return 0;
}
