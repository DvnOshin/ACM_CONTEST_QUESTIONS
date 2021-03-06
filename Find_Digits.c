Function Description
Complete the findDigits function in the editor below. It should return an integer representing the number of digits of d that are divisors of d.
findDigits has the following parameter(s):
n: an integer to analyze

INPUT FORMAT
The first line is an integer,t, indicating the number of test cases.
The  subsequent lines each contain an integer,n.

OUTPUT FORMAT
For every test case, count the number of digits in  that are divisors of . Print each answer on a new line.

Sample Input
2
12
1012

Sample Output
2
3
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,temp,d,count=0;
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
            d=temp%10;
           if(d!=0 && n%d==0)
           {
               count=count+1;
           }
            temp=temp/10;
        }
        printf("%d\n",count);
    }
return 0;
}
