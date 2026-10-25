class Solution {
public:
    int maxProfit(vector<int>& prs) {
        int n = prs.size();
        int min = INT_MAX;
        int maxi = 0;
        for(int i = 0;i<n;i++){
            if(min> prs[i]){
                min = prs[i];
                continue;
            }
            maxi = max(maxi,prs[i]-min);
        }
        return maxi;
    }
};
