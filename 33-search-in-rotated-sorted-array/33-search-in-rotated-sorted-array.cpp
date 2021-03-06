class Solution {
    int search(vector<int>& arr,int l,int h,int key)
    {
    if (l > h)
        return -1;
 
    int mid = l + (h - l) / 2;
    if (arr[mid] == key)
        return mid;
 
    // The tricky case, just update left and right
    if ((arr[l] == arr[mid])
        && (arr[h] == arr[mid]))
    {
        ++l;
        --h;
        return search(arr, l, h, key);
    }
 
    // If arr[l...mid] is sorted
    if (arr[l] <= arr[mid]) {
 
        // As this subarray is sorted, we can quickly
        // check if key lies in any of the halves
        if (key >= arr[l] && key <= arr[mid])
            return search(arr, l, mid - 1, key);
 
        // If key does not lie in the first half
        // subarray then divide the other half
        // into two subarrays such that we can
        // quickly check if key lies in the other half
        return search(arr, mid + 1, h, key);
    }
 
    // If arr[l..mid] first subarray is not sorted
    // then arr[mid... h] must be sorted subarray
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid + 1, h, key);
 
    return search(arr, l, mid - 1, key);
}
    
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return search(nums,0,n-1,target);
            
    }
};