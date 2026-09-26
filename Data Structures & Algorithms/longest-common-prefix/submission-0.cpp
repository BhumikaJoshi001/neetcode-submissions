class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
       int n=strs.size();
       sort(strs.begin(),strs.end());
       int i=0;
       int j=0;
       while(i<strs[0].length() && j<strs[n-1].length()){
        if(strs[0][i]==strs[n-1][j]){
            ans=ans+strs[0][i];
            i++;
            j++;
        }
        else{
            break;
        }
       }
       return ans;
    }
};