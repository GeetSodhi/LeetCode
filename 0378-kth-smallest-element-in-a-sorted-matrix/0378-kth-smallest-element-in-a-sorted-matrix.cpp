class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                p.push(mat[i][j]);
            }
        }
        int i=1;
        while(i<=k){
            if(i==k){
                return p.top();
            }
            p.pop();
            i++;
        }
        return -1;
    }
};