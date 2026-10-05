class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;

            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
