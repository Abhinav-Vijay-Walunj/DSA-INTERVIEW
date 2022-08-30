class Solution {
public:
    int findFarthes(vector<int>& nums2, int s, int target){
        int start = s;
        int end = nums2.size()-1;
        
        while(end>=start){
            int mid = start + (end - start)/2;
            if(nums2[mid]>=target)
                start = mid + 1;
            
            else if(nums2[mid]<target)
                end = mid - 1;
        }
        return start;
    }
    
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxDistance = 0;
        for(int i=0; i<nums1.size(); i++){
            int j = findFarthes(nums2, i, nums1[i]);
            if(j>0) {
                j--;
            }
            
            if(i<=j && nums1[i]<=nums2[j] && maxDistance<(j - i)) {
                maxDistance = j - i;
            }
        }
        return maxDistance;
    }
};