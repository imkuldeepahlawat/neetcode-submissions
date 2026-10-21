class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int> ans;
         for(auto i:nums){
            mp[i]++;
         }
         priority_queue<P,vector<P>,greater<P>> minheap;
         for(auto i:mp){
            minheap.push({i.second,i.first});

            if(minheap.size() >k){
                minheap.pop();
            }
         }
         while(minheap.size()>0){
            ans.push_back(minheap.top().second);
            minheap.pop();
         }
         return ans;
    }
};
