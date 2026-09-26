class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool>check;
        for(int i=0;i<nums.size();i++){
            if(check.find(nums[i])!=check.end()){
                return true;
            }
            else{
                check[nums[i]]=true;
            }
        }
            return false;

    }
};