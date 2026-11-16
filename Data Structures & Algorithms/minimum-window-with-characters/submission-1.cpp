class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() >s.size())return "";
        int i = 0;
        int j = 0;
        int n = s.size();
        unordered_map<char,int>mp;
        int count_require = t.size();
        for(auto ch:t){
            mp[ch]++;
        }
        int window_size = INT_MAX;
        int start_i =0;
        while(j<n){
            char ch = s[j];
            if(mp[ch] >0){
                count_require--;
            }
            mp[ch]--;
            // start shrinking the window
            while(count_require ==0){
                int currWinSize = j-i+1;
                if(window_size >currWinSize){
                    window_size = currWinSize;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] >0){
                    count_require++;
                }
                i++;
                
            }
            j++;
            
        }

        return window_size == INT_MAX ? "":s.substr(start_i,window_size);

    }
};
