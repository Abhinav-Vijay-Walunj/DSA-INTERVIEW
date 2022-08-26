class Solution {
public:
    bool reorderedPowerOf2(int n) {
         string s = to_string(n);
        sort(s.begin(),s.end());
		
        // storing all powers of two up to 10^9 as a sorted string
        unordered_set<string> powersOfTwo;
        for(int i=0;i<=30;i++){
            string temp = to_string((1<<i));
            sort(temp.begin(),temp.end());
            powersOfTwo.insert(temp);
        }
        
        return powersOfTwo.count(s);
    }
};