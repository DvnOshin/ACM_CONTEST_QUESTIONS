INPUT FORMAT
The first line contains an integer n, the number of steps in Gary's hike.
The second line contains a single string s, of n characters that describe his path.

OUTPUT FORMAT
Print a single integer that denotes the number of valleys Gary walked through during his hike.

SAMPLE INPUT
8
UDDDUDUU

SAMPLE OUTPUT
1
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n; 
    cin>>n;
    char ch;
    int sea_l=0, valley=0;
    while(cin >> ch)
    { 
        if(ch=='U')
            ++sea_l;
        if(ch=='D')
            --sea_l;
        if(sea_l==0 && ch=='U')
            ++valley;
        }
    cout<<valley<<endl;
    return 0;
}
