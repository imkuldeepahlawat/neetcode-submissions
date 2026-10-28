class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int> sf1(26,0);
        vector<int> sf2(26,0);
        for(auto ch:s1){
            sf1[ch-'a']++;
        }
        int i = 0, j = 0;
        while(j<m){
            sf2[s2[j]-'a']++;
            if(j-i+1 >n){
                sf2[s2[i]-'a']--;
                i++;
            }
            if(sf1 == sf2)return true;
            j++;
        }


        return false;
    }
};
