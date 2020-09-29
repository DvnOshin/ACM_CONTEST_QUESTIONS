Input Format
The first line contains an integer , the number of pages in the book.
The second line contains an integer, , the page that Brie's teacher wants her to turn to.

Output Format
Print an integer denoting the minimum number of pages Brie must turn to get to page .

Sample Input
6
2

Sample Output 
1
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,turn;
    cin>>n;
    cin>>p;
    turn=(n/2)-(p/2);
    if(turn>p/2)
        turn=p/2;
    cout<<turn;
return 0;
}
