class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, bool>map;
        int j=0; 
        int ans = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[j]){
                continue;
            }
            else{
                j+=1;
                nums[j]= nums[i];
                ans++;
            }
        }

        return ans;
    }
};