class Solution {
public:
    vector<vector<int>>ans;
    void twosum(vector<int> nums, int target , int i , int j){
          while(i<j){
            int sum = nums[i]+nums[j];
            if(sum >target) j--;
            else if(sum <target) i++;
            else{
                while(i<j &&nums[i] == nums[i+1])i++;
                while(i<j &&nums[j] == nums[j-1])j--;

                ans.push_back({-target,nums[i],nums[j]});
                i++;
                j--;

            }
          }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        ans.clear();
        if(nums.size() <3) return ans;

        sort(nums.begin(),nums.end());

        for(int i = 0;i <=n-3;i++){
            if(nums[i] == nums[i-1] && i > 0) continue;
            int n1 = nums[i];
            int target = -n1;
            int n2 = i+1;
            int n3 = n-1;
            twosum(nums,target,n2, n3);
        }
        return ans;
        
    }
};
