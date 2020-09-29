Hawkeye is a MARVEL character who has a perfect aim in archery. Its almost impossible for him to miss his aim. As you are the head of technical team at MARVEL ,
you have been assigned a very critical task. During practice hawkeye uses a square archery practice board. For our convenience we will assume it to be a N * N matrix.
He shoots an arrow at position i,j with power P. Now power reduces by 1 as we move away from position i,j . 
Your task is to show the graph representing the impact of the arrow on the practice board.

INPUT FORMAT
First line of input contains a single integer N denoting the size of the practice board.
Second line contains 3 integers i,j denoting position at which arrow was shot and p denoting the power used to shoot the arrow.

OUTPUT FORMAT
Output a 2D matrix representing the impact on the practice board.

SAMPLE INPUT 
7
3 3 3

SAMPLE OUTPUT
0 0 0 0 0 0 0 
0 1 1 1 1 1 0 
0 1 2 2 2 1 0 
0 1 2 3 2 1 0 
0 1 2 2 2 1 0 
0 1 1 1 1 1 0 
0 0 0 0 0 0 0

EXPLANATION
The size of the practice board is 7*7
Hawkeye shoots an arrow at 3,3 position with power 3.
So, at every layer the impact reduces by 1 until impact becomes 0
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,p,shoot,l1,l2;
    cin>>n;
    cin>>i>>j>>p;
    for(l1=0;l1<n;l1++)
    {
        for(l2=0;l2<n;l2++)
        {
            shoot=p-max(abs(i-l1),abs(j-l2));
        if(shoot<0)
        cout<<0<<" ";
        else
        cout<<shoot<<" ";
        }
        cout<<endl;
    }
    return 0;
} 
