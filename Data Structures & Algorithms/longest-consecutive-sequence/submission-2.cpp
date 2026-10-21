class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;
        unordered_set<int> st;
        for (auto i : nums) {
            st.insert(i);
        }

        for (int itr : nums) {
            if (st.find(itr - 1) == st.end()) {
                int stk = 1;
                while (st.find(itr + stk) != st.end()) {
                    stk++;
                }
                longest = max(longest, stk);
            }
        }
        return longest;
    }
};
