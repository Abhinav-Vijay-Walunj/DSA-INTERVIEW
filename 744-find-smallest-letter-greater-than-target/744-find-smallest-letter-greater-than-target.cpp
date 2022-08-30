class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0, e = letters.size()-1, m;
        while(s<e){
            m = s + (e-s)/2;
            if(letters[m] <= target)
                s = m+1;
            else
                e = m;
        }
        if(letters[s] > target)
            return letters[s];
        else
            return letters[0];
    }
};