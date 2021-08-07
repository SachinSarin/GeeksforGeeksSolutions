/*
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output:
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105

Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6

Explanation :
Testcase 1: 1 2 3 4 5  when rotated by 2 elements, it becomes 3 4 5 1 2.
*/
#include<iostream>
using namespace std;
void rotatearray(int arr[] , int n , int k)
{
    int result[n];
    int x = 0;
    for(int i = k; i < n; i++)
    {
        result[x] = arr[i];
        x++;
    }
    for(int j = 0; j <= k-1; j++)
    {
        result[x] = arr[j];
        x++;
    }
    
    for(int a = 0; a<n; a++)
    {
        cout<<result[a]<<" ";
    }
    cout<<endl;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	    rotatearray(arr,n,k);
	}
	return 0;
}
