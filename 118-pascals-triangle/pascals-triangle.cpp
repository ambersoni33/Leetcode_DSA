class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        vector<int>v;
        for(int i =0;i<numRows;i++){
            v.clear();
            for(int j=0;j<=i;j++){
                if(i==j||j==0){
                    v.push_back(1);
                }
                else
                {
                    v.push_back(a[i-1][j-1]+a[i-1][j]);
                }
            }
        
        a.push_back(v);
        }
        return a;
    }
};