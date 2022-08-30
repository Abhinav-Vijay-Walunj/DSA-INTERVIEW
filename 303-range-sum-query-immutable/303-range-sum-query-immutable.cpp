class NumArray {
    
public:
    vector<int> presums;
    NumArray(vector<int>& nums) {
       presums.resize(nums.size()+1,0);  
    for(int i=1; i<presums.size();i++)
    {
        presums[i]=presums[i-1]+nums[i-1];
    }
   
    }
    
    int sumRange(int left, int right) {
         return presums[right+1]-presums[left];
    }
    
   
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */