/*
Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. Return the maximum possible summation of i*arr[i].

Examples :  

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can get 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72

Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}
Output: 330
We can get 330 by rotating array 9 times.
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
0*1 + 1*2 + 2*3 ... 9*10 = 330

*/
#include <iostream>
using namespace std;
int maxSum(int arr[] , int n)
{
    int arrSum = 0;
    int currSum = 0;
    for(int i = 0; i < n; i++)
    {
        arrSum = arrSum + arr[i];
        currSum = currSum + (i*arr[i]);
    }
    
    int maxVal = currSum;
    for(int i = 1; i < n; i++)
    {
        currSum = currSum + arrSum - n*arr[n-i];
        if(currSum > maxVal)
        {
            maxVal = currSum;
        }
    }
    return maxVal;
}
int main() {
	int arr[] = {1,2,3,4,5};
	cout<<maxSum(arr,5)<<endl;
	return 0;
}
