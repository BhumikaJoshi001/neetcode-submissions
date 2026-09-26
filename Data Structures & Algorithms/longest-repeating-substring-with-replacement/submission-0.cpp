class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int n=s.length();
        int maxlen=0;
        unordered_map<int,int>freq;
        int maxfre=0;
        while(j<n){
            freq[s[j]]++;
            for(auto it:freq){
                maxfre=max(maxfre,it.second);
            }
            while(j-i+1>maxfre+k){
                freq[s[i]]--;
                if(freq[s[i]]==0){
                    freq.erase(s[i]);
                }
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};
