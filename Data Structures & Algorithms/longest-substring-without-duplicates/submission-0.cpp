class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxlen=0;
        unordered_map<char,int>freq;
        while(j<s.length()){
            freq[s[j]]++;
            while(j-i+1>freq.size()){
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
