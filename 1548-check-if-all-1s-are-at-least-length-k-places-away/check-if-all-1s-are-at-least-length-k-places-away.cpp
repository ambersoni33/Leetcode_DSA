class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
       stack<int>st;

       int i = 0;
       while(i<nums.size()){
        if(st.empty() && nums[i] == 1){
            st.push(i);
            i++;
        }
        else if(nums[i] == 1){
            int pos = st.top();
            int rem = i - pos -1;
            if(rem < k){
                return false;
            }
            st.pop();
            st.push(i);
            i++;
        }
        else i++;
       }
       return true;
    }
};