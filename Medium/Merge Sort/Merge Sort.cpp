class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int k = 0;
         int result[r-l+1];
         int i = l;
         int j = m + 1;
         while(i<=m&&j<=r)
         {
             if(arr[i]<=arr[j])
             {
                 result[k++] = arr[i];
                 i++;
             }
             else
             {
                 result[k++] = arr[j];
                 j++;
             }
         }
         //for remaining element
         while(i<=m)
         {
             result[k++] = arr[i++];
         }
         while(j<=r)
         {
             result[k++] = arr[j++];
         }
         int x = 0;
         for(int i = l; i <= r; i++)
         {
             arr[i] = result[x++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        {
            return;
        }
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};
