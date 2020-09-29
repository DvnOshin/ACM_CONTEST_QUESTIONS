Bob has a strange counter. At the first second, it displays the number 3. Each second, the number displayed by the counter decrements by 1 until it reaches 1.
The counter counts down in cycles. In next second, the timer resets to 2*the initial number for the prior cycle  and continues counting down. The diagram below shows
the counter values for each time t in the first three cycles:
Find and print the value displayed by the counter at time t.

Function Description
Complete the strangeCounter function in the editor below. It should return the integer value displayed by the counter at time t.
strangeCounter has the following parameter(s):
t: an integer

Input Format
A single integer denoting the value of t.

Output Format
Print the value displayed by the strange counter at the given time t.

Sample Input
4

Sample Output
6

Explanation
Time t=4 marks the beginning of the second cycle. It is double the number displayed at the beginning of the first cycle:2*3=6.
This is also shown in the diagram in the Problem Statement above.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*********************************************************************************************************************************************************************************

#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t,value=3;
 cin>>t;
 while(t>value)
 {
     t=t-value;
     value*=2;
 }
 cout<<value-t+1;
 return 0;
}
