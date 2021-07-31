/*
Move all negative elements to end 
Easy Accuracy: 53.78% Submissions: 5983 Points: 2
Given an unsorted array having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

 

Example 1:

Input : 
A[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5

Example 2:

Input : 
A[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function segregateElements() which takes the array A[] and its size N as inputs and store the answer in the array A[] itself.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
 


Constraints:
1 ≤ N ≤ 105
-105 ≤ A[] ≤ 105
*/
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        
        int temp[n];
        int k = 0;
        for(int i = 0; i < n; i++) // for only postive elements
        {
            if(arr[i]>0)
            {
                temp[k++] = arr[i];
            }
        }
        for(int i = 0;i < n; i++) // for negative elements
        {
            if(arr[i]<0)
            {
                temp[k++] = arr[i];
            }
        }
        int x = 0;
        for(int i = 0; i < n; i++)
        {
            arr[x] = temp[x];
            x++;
        }
        
    }
};
