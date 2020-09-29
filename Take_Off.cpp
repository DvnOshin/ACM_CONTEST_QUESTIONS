There are three planes A,B and C. Plane A will takeoff on every pth day i.e.p,2p,3p and so on. Plane B will takeoff on every qth day and plane C will takeoff on every rth day. 
There is only one runway and the takeoff timing is same for each of the three planes on each day.Your task is to find out the maximum number of flights that will successfully 
takeoff in the period of N days.

NOTE: If there is collision between the flights no flight will take off on that day.

INPUT FORMAT
The first line of the input contains a single integer T, the number of test cases.
Then T lines follow each containing four space-separated integers N,p,q and r as denoted in the statement.

OUTPUT FORMAT
For each test case print a single integer representing the maximum number of flights that will successfully takeoff in the period of days.

SAMPLE INPUT
2
10 2 3 4
10 2 2 4

SAMPLE OUTPUT 
4
0

EXPLANATION 
Sample test case 1: Note that on days 2 and 10 plane A can takeoff, on days 3 and 9 plane B can takeoff.
Sample test case 2: Note that there is no day on which there is no collision.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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
        int n,p,q,r,i,c=0;
        cin>>n;
        cin>>p;
        cin>>q;
        cin>>r;
        for(i=1;i<=n;i++)
        {
            if (i%p==0 && i%q!=0 && i%r!=0)
            c+=1;
            if (i%p!=0 && i%q==0 && i%r!=0)
            c+=1;
            if (i%p!=0 && i%q!=0 && i%r==0)
            c+=1;
        }
        cout<<c<<endl;
    }
    return 0;
}
       
