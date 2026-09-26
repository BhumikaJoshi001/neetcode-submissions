class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>maps;
        for(int i=0;i<nums.size();i++){
            int check=target-nums[i];
            if(maps.find(check)!=maps.end()){
                ans.push_back(maps[check]);
                ans.push_back(i);
                return ans;
            }
            else{
                maps[nums[i]]=i;
            }
        }
        return ans;
    }
};
