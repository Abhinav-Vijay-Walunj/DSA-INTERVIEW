class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(int i=0;i<magazine.size();i++){
            int k=magazine[i]-'a';
            arr[k]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int k=ransomNote[i]-'a';
            if(arr[k]>0){
                arr[k]--;
            }else{
                return false;
            }
        }
        return true;
        
    }
};