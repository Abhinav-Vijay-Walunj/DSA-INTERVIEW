class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         stack<int> st;
        map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                mp[nums2[i]]=-1;
            }
            else
            {
                if(st.top()>nums2[i])
                {
                    mp[nums2[i]]=st.top();
                }
                else
                {
                    while(st.top()<nums2[i])
                    {
                        st.pop();
                        if(st.empty())
                        {
                            mp[nums2[i]]=-1;
                            break;
                        }
                        if(st.top()>nums2[i])
                        {
                            mp[nums2[i]]=st.top();
                            break;
                        }
                    }
                }
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(auto val:nums1)
        {
            ans.push_back(mp[val]);
        }
        return ans;
        
    }
};