class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countzero = 0;
        int prod = 1;
        vector<int> ans(nums.size(),0);
        for(int &i:nums){
            if(i == 0){
                countzero++;
                continue;
            }
            prod *= i;
        }
        if(countzero >=2 ){
            return ans;
        }
        for(int i = 0;i<nums.size();i++){
            if(countzero ){
                if(nums[i] == 0){
                    ans[i] = prod;
                }else{ 
                    ans[i] = 0;
                }
            }else{
                ans[i] = prod/nums[i];
            }
        }
        return ans;
    }
};
