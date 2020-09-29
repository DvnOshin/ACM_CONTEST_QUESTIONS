INPUT 
The first line contains an integer n , the number of socks represented in ar .
The second line contains n space-separated integers describing the colors aar[i] of the socks in the pile.

OUTPUT
Return the total number of matching pairs of socks that John can sell.

Sample Input
9
10 20 20 10 10 30 50 10 20

Sample Output
3
John can match three pairs of socks.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    int n,ar[100],i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                    ar[j] = 0;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
