class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size()){
            return false;
        }
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int left = 0; 
        int right = 0;
        while(left<ransomNote.size() && right<magazine.size()){
            if(ransomNote[left]!=magazine[right]){
                right++;
            }else{
                left++;
                right++;
            }
        }

        if(left==ransomNote.size()){
            return true;
        }else{
            return false;
        }
    }
};