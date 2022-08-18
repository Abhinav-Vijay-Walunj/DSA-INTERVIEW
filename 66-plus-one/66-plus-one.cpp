class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k=1,n=digits.size()-1;
        if(digits[n] != 9)
        {
            digits[n]++;
        }
        else
        {
            while(n>=0 && digits[n] == 9)
            {
                digits[n]=0;
                n--;
            }
            if(n<0)
            {
                digits.insert(digits.begin(),1);
            }
            else
                digits[n]++;
        }
        
        return digits;
        
    }
};