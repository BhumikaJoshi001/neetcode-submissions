class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        reverse(word1.begin(),word1.end());
        reverse(word2.begin(),word2.end());
        int i=word1.size()-1;
        int j=word2.size()-1;
        string newstr="";
        bool var=true;
        while(i>=0 && j>=0){
            if(var){
                newstr=newstr+word1[i];
                i--;
                var=false;
            }
            else{
                newstr=newstr+word2[j];
                j--;
                var=true;
            }
        }
        if(i>=0){
            while(i>=0){
                newstr=newstr+word1[i];
                i--;
            }
        }
        if(j>=0){
            while(j>=0){
                newstr=newstr+word2[j];
                j--;
            }
        }
        return newstr;
    }
};