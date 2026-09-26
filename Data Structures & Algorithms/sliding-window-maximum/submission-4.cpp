class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        if(k==1){
            return nums;
        }
        while(j<n){
            pq.push({nums[j],j});
            if(j-i+1==k){
                ans.push_back(pq.top().first);
                
                while(!pq.empty() && pq.top().second<=i){
                    pq.pop();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
