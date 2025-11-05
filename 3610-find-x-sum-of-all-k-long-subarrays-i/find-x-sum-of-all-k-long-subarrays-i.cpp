class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;

        int i=0, j=k-1;
        while(j<nums.size()){
            unordered_map<int,int>map;

            for(int t=i;t<=j; t++){
                map[nums[t]]++;
            }

            vector<pair<int,int>> vecPair (map.begin(),map.end()); 
            sort(vecPair.begin(), vecPair.end(), [](const auto&a, const     auto &b){
                return a.second > b.second;
            });
            int l = 0;
            while (l < vecPair.size()) {
        int m = l + 1;

        // Find where the frequency changes
        while (m < vecPair.size() && vecPair[m].second == vecPair[l].second) {
            m++;
        }

        // Step 3: Sort only that part (i to j-1) by key in descending order
        sort(vecPair.begin() + l, vecPair.begin() + m, [](pair<int,int> a, pair<int,int> b){
            return a.first > b.first; // larger key first
        });

        // Move to next group
        l = m;
    }
        long long sum =0;
        int tempx = x;
       for(int p = 0; p<vecPair.size(); p++){

        if(tempx){
            sum+= 1LL*vecPair[p].first*vecPair[p].second;
            tempx--;
        }
       }
       ans.push_back(sum);
       i++,j++;
        }

        return ans;
        }
    
};