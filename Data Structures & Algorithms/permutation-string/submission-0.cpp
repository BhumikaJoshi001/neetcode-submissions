class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.length();i++){
            string word=s2.substr(i,n);
            sort(word.begin(),word.end());
            if(word==s1){
                return true;
            }
        }
        return false;
    }
};
