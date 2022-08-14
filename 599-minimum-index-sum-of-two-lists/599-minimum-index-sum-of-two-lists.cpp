class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int n1=list1.size(),n2=list2.size();
        int t=n1+n2;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(list1[i] == list2[j] && t>i+j)
                {
                    ans.clear();
                    ans.push_back(list1[i]);
                    t=i+j;
                }
                else if(list1[i] == list2[j] && t == i+j)
                {
                    ans.push_back(list1[i]);
                    t=i+j;
                }
            }
        }
        return ans;
    }
};