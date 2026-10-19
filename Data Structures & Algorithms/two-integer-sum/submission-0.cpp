class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            for(int j = nums.size()-1;j>=0;j--){
                int sum = nums[i] +nums[j];
                if(sum ==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
