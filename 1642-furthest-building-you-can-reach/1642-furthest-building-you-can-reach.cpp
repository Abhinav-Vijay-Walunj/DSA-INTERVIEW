class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        map<int, short> mp;
	int n = size(heights), i = 0, jumpHeight = 0;
	for(; i < n - 1; i++) {
		jumpHeight = heights[i + 1] - heights[i];
		if(jumpHeight <= 0) continue;
		mp[jumpHeight]++;
		if(ladders--<=0){                
			bricks -= begin(mp) -> first;
			if(!--begin(mp) -> second) 
				mp.erase(begin(mp));
		}
		if(bricks < 0) return i;
	}
	return i;
        
    }
};