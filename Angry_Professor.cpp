#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int n,k,a[n],i,count=0;
        cin>>n;
        cin>>k;
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
            count=count+1;
        }
        if(k>count)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;  
}
