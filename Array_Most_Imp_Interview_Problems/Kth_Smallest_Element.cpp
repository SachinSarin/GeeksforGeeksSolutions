/*
Kth smallest element 
Medium Accuracy: 46.66% Submissions: 95198 Points: 4
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.
Your Task:
You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array, it's size and an integer k as input and returns the kth smallest element.
 
 
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
*/

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
    
        priority_queue<int> pq; // using max-heap
        int n = r-l+1;
        for(int i = 0;i < k; i++)
        {
            pq.push(arr[i]);   
        }
        for(int i =k; i  < n; i++ )
        {
            if(arr[i]<pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
