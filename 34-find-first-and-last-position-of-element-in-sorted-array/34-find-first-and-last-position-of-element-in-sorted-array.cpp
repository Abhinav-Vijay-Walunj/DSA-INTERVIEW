class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        vector<int> ans(2,-1);
        
        int n=a.size(),s=0,e=n-1;
        
        //first occurrence
	while(s <= e){
		int m = s + (e-s)/2;
		if(a[m] < target)
			s = m+1;
		else if(a[m] > target)
			e = m-1;
		else{
			if(m == s || a[m] != a[m-1]){
				ans[0] = m;
				break;
			}
			else{
				e = m-1;
				ans[0] = m-1;
			}
		}
	}

	//last occurrence
	s = 0, e = a.size()-1;
	while(s <= e){
		int m = s + (e-s)/2;
		if(a[m] < target)
			s = m+1;
		else if(a[m] > target)
			e = m-1;
		else{
			if(m == e || a[m] != a[m+1]){
				ans[1] = m;
				break;
			}
			else{
				s = m+1;
				ans[1] = m+1;
			}
		}
	}
	return ans; 
        /*
        int mid;
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(nums[mid] == target)
            {
                a=mid;
                b=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        while(nums[a] == target && a>=0)
            a--;
        while(nums[b] == target && b<n)
            b++;
        v.push_back(a+1);
        v.push_back(b-1);
        return v;*/
    }
};