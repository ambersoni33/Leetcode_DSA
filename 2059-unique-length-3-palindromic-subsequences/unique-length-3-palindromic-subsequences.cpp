class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int>first(26,-1);
        vector<int>last(26,-1);

        for(int i=0;i<s.size(); i++){
            if(first[s[i]-'a'] == -1)
            first[s[i]-'a'] = i;
        }
        for(int i=s.size()-1;i>=0; i--){
            if(last[s[i]-'a'] == -1 && first[s[i]-'a'] != i)
            last[s[i]-'a'] = i;
        }
        set<char>st;
        int ans = 0;
        for(int i=0;i<26;i++){
            for(int j=first[i]+1; j<last[i]; j++){
                st.insert(s[j]);
            }

            ans += st.size();
            st.clear();
        }

        return ans;

    }
};