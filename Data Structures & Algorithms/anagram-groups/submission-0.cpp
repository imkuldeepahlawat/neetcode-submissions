class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;

        for(auto i:strs){
            // making acopy of orignal string
            string temp = i;
            // sorting a string 
            sort(temp.begin(),temp.end());
            // adding to mapping
            mp[temp].push_back(i);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
