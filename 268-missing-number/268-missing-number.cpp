class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long s = (n*(n+1))/2;
        //sort(nums.begin(),nums.end());
        //int j=0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            s=s-(*i);
    
        }
        return s;
        
    }
};