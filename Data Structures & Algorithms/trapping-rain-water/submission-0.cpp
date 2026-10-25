class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int> lm(n);
        vector<int> rm(n);
        // creating both;
        lm[0]= nums[0];
        rm[n-1]= nums[n-1];
        for(int i = 1;i<n;i++){
            lm[i] = max(lm[i-1],nums[i]);
        }
        for(int i = n-2;i>=0;i--){
            rm[i] = max(rm[i+1],nums[i]);
        }
        int sum = 0;

        for(int i = 0;i<n;i++){
            int tt = min(lm[i],rm[i])-nums[i];
            sum += tt;
        }
        return sum;
    }
};
