class Solution {
public:
    int maxArea(vector<int>& ha) {
        int maxi = INT_MIN;
        int i = 0;
        int j = ha.size()-1;

        while(i<j){
            int w = j-i;
            int h = min(ha[i],ha[j]);
            int water = w*h;
            maxi = max(water,maxi);
            if(ha[i]<ha[j])i++;
            else j--;
        }
        return maxi;
        
    }
};
