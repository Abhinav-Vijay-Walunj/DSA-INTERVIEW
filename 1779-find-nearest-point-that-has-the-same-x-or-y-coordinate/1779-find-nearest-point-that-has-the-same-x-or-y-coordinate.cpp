class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int s1 = points.size();
map<int, int> m;

for (int i = 0; i < s1; i++)
{
    if (x == points[i][0] || y == points[i][1])
        m.insert({ abs(x - points[i][0]) + abs(y - points[i][1]), i });
}

auto it = m.begin();
if (it != m.end())
    return it->second;
else
    return -1;   
    }
};