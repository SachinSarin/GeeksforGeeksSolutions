/*
Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].
Examples: 

Input : 
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3} 
x = 3 
k = 3 
Output : Yes 
There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.
Input : 
arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25} 
x = 23 
k = 5 
Output :Yes 
There are three segments and last segment is not full {21, 23, 56, 65, 34}, {54, 76, 32, 23, 45} and {21, 23, 25}. 
23 is present all window.
Input :arr[] = { 5, 8, 7, 12, 14, 3, 9} 
x = 8 
k = 2 
Output : No
*/

// C++ code to find the every segment size of
// array have a search key x
#include <bits/stdc++.h>
using namespace std;

bool findxinkindowSize(int arr[], int x, int k, int n)
{
	int i;
	for (i = 0; i < n; i = i + k) {

		// Search x in segment starting
		// from index i.
		int j;
		for (j = 0; j < k; j++)
			if (arr[i + j] == x)
				break;

		// If loop didn't break
		if (j == k)
		return false;
	}

	// If n is a multiple of k
	if (i == n)
	return true;

	// Check in last segment if n
	// is not multiple of k.
	int j;
	for (j=i-k; j<n; j++)
	if (arr[j] == x)
		break;
	if (j == n)
	return false;
	
	return true;
}

// main driver
int main()
{
	int arr[] = { 5,8,7,12,14,3,9 };
	int x = 8, k = 2;
	int n = sizeof(arr) / sizeof(arr[0]);
	if (findxinkindowSize(arr, x, k, n))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
