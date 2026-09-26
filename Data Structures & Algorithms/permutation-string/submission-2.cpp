class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        int n=s1.length();
        for(int i=0;i<s1.length();i++){
            map1[s1[i]]++;
        }
        int j=0;
        int i=0;
        while(j<s2.length()){
            map2[s2[j]]++;
            if(j-i+1==n){
                if(map1==map2){
                    return true;
                }
                else{
                    map2[s2[i]]--;
                    if(map2[s2[i]]==0){
                        map2.erase(s2[i]);
                        
                    }
                    i++;
                }
            }
            j++;
        }
        return false;
    }
};
