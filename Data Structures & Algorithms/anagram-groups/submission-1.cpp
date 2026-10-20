class Solution {
public:
    string genrate(string str){
        int arr[26] ={0};
        // making frquency array
        for(auto ch : str){
            arr[ch-'a']++;
        }
        string newword = "";

        for(int i = 0;i<26;i++){
            if(arr[i] > 0){
                newword += string(arr[i],i+'a');
            }
        }
        return newword;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;

        for(auto i:strs){
            // making acopy of orignal string
            
            // sorting a string 
            // sort(temp.begin(),temp.end());
            string sword = genrate(i);
            // adding to mapping
            mp[sword].push_back(i);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
