class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>map;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }

        for(const auto& a: map){
            if(a.second > nums.size()/3){
                ans.push_back(a.first);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};