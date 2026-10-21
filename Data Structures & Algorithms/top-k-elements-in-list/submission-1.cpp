class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        vector<int> ans;
         for(auto i:nums){
            mp[i]++;
         }
         vector<vector<int>>bsort(n+1);
         for(auto itr:mp){
            bsort[itr.second].push_back(itr.first);

         }

         for(int i = n;i>=0;i--){
            if(bsort[i].size() ==0) continue;
            
            while(bsort[i].size()>0 && k >0){
                ans.push_back(bsort[i].back());
                bsort[i].pop_back();
                k--;
            }
         }
         return ans;
    }
};
