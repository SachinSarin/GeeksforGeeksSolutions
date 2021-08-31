/*
Given an array that is sorted and then rotated around an unknown point. Find if the array has a pair with a given sum ‘x’. It may be assumed that all elements in the array are distinct.

Examples : 

Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
Output: true
There is a pair (6, 10) with sum 16

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 35
Output: true
There is a pair (26, 9) with sum 35

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 45
Output: false
There is no pair with sum 45.
*/
#include<bits/stdc++.h>
using namespace std;
bool ispairexist(int arr[] , int n , int target)
{
    unordered_set<int> s;
    for(int i = 0; i  < n; i++)
    {
        if(s.find(target-arr[i])!=s.end())
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main() {
	int arr[] = {11, 15, 6, 8, 9, 10};
	int target = 126;
	if(ispairexist(arr,6,target))
	{
	    cout<<"yes"<<endl;
	}
	else
	{
	    cout<<"No"<<endl;
	}
	return 0;
}
