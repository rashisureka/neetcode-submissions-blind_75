class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int findi=target-nums[i];
            if(mp.find(findi)!=mp.end()){
                return {mp[findi],i};
            }
            mp[nums[i]]=i;
        }
    }
};
