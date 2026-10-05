class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string newstr="";
        while(i<word1.length() && j<word2.length()){
            newstr=newstr+word1[i];
            i++;
            newstr=newstr+word2[j];
            j++;
        }
        while(i<word1.length()){
            newstr=newstr+word1[i];
            i++;
        }
        while(j<word2.length()){
            newstr=newstr+word2[j];
            j++;
        }
        return newstr;
    }
};