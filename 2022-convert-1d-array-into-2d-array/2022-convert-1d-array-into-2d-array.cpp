class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int p=original.size();
        vector<vector<int>> ans(m,vector<int>(n));
        if(p!=m*n){
            return {};
        }
        
        int index=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[index++];
            }
        }
        return ans;
        
    }
};