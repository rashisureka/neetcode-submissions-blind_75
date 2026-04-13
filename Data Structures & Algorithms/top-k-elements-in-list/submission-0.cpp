class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
        typedef pair<int,int> P;
        for(auto &it:nums){
            mp[it]++;
        }
        //min heap here
        priority_queue<P,vector<P>,greater<P>> pq;

        for(auto it:mp){
            int value=it.first;
            int freq=it.second;
            pq.push({freq,value});
            if(pq.size()>k){
                pq.pop();
            }

        }
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
