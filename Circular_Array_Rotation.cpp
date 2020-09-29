John Watson knows of an operation called a right circular rotation on an array of integers. One rotation operation moves the last array element to the first position and
shifts all remaining elements right one. To test Sherlock's abilities, Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation 
a number of times then determine the value of the element at a given position.
For each array, perform a number of right circular rotations and return the value of the element at a given index.
For example, array a=[3,4,5], number of rotations,k=2 and indices to check,m=[1,2].
First we perform the two rotations:
[3,4,5]->[5,3,4]->[4,5,3]
Now return the values from the zero-based indices 1 and 2 as indicated in the m array.
a[1]=5
a[2]=3

FUNCTION DESCRIPTION
Complete the circularArrayRotation function in the editor below. It should return an array of integers representing the values at the specified indices.
circularArrayRotation has the following parameter(s):
a: an array of integers to rotate
k: an integer, the rotation count
queries: an array of integers, the indices to report

INPUT FORMAT
The first line contains 3 space-separated integers, n, k, and q, the number of elements in the integer array, the rotation count and the number of queries.
The second line contains n space-separated integers, where each integer i describes array element a[i] (where 0<=i<n ).
Each of the q subsequent lines contains a single integer denoting m, the index of the element to return from a.

OUTPUT FORMAT
For each query, print the value of the element at index  of the rotated array on a new line.

Sample Input 0
3 2 3
1 2 3
0
1
2

Sample Output 0
2
3
1

Explanation 0
After the first rotation, the array becomes [3,1,2].
After the second (and final) rotation, the array becomes [2,3,1].

Let's refer to the array's final state as array b=[2,3,1]. For each query, we just have to print the value of bm on a new line:
1. m=0,b0=2.
2. m=1,b1=3.
3. m=2,b2=1.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,w;
    cin>>n>>k>>q;
    int a[n],i,b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[(i+k)%n]=a[i];
    }
    for(i=0;i<q;i++)
    {
        int m;
        cin>>m;
        cout<<b[m]<<endl;
    }
    return 0;
}
