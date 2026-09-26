class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                idx=i;
                break;
            }
        }
        int k=1;
        for(int j=idx;j<nums.size();j++){
            if(j>0 && nums[j]==nums[j-1]){
                continue;
            }
            if(nums[j]!=k){
                return k;
            }
            else{
                k++;
            }
        }
        return k;
    }
};