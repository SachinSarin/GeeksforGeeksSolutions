/*
Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1

*/
#include <iostream>
using namespace std;
void solve(int arr[] , int n)
{
    if(n==0)
    {
        return;
    }
    for(int i = n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	    solve(arr,n);
	}
	return 0;
}
