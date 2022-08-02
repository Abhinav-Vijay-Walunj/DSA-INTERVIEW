class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // vector<int> t;
        priority_queue<int> pq;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                // t.push_back(matrix[i][j]);
                pq.push(matrix[i][j]);
                if(pq.size() == k+1)
                {
                    pq.pop();
                }
            }
        }
        // sort(t.begin(),t.end());
        
        return pq.top();;
    }
};