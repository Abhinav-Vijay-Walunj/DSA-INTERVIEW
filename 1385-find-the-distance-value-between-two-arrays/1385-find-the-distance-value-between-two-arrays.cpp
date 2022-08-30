class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         int s,e,mid;
    int count = 0;
    sort(arr2.begin(),arr2.end());
    
    for(int i=0;i<arr1.size();i++){
        s = 0;
        e = arr2.size()-1;
        count++;
        while(s <= e){
            mid = s + (e-s)/2;
            if(abs(arr2[mid]-arr1[i])<=d){
                count--;
                break;
            }
            if(arr2[mid]>arr1[i]) 
                e=mid-1;
            
            else s=mid+1;
        }
    }
    return max(0,count);
    }
};