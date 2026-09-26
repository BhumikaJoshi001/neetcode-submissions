class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            string word=strs[i];
            ans += to_string(word.length());
            ans.push_back('#');
            ans += word;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0;i<s.length();){
            string n="";
            while(isdigit(s[i])){
                n=n+s[i];
                i++;
            }
            int num=stoi(n);
            i++; // skip '#'
            string res = s.substr(i, num);
            ans.push_back(res);
            i += num;
        }
        return ans;
    }
};