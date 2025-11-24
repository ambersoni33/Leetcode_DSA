class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int k = 0;
        for(int i=0; i<nums.size(); i++){
           k = ((k<<1) + nums[i]) % 5;
           if(k==0) ans.push_back(true);
           else ans.push_back(false);
        }

        return ans;
    }
};