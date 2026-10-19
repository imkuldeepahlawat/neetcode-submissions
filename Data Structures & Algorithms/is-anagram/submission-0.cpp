class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,bool> mp;
        for(auto i :s){
            mp[i] = true;
        }
        for(auto i :t){
            if(mp.find(i) ==mp.end()){
                return false;
            }
        }

        return true;
    }
};
