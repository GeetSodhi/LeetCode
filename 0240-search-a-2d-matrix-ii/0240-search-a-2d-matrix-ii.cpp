class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int RowIndex=0;
        int ColIndex=n-1;
        while(RowIndex<m && ColIndex>=0){
            int elem=mat[RowIndex][ColIndex];
            if(elem==target){
                return 1;
            }
            else if(elem>target){
                ColIndex--;
            }
            else{
                RowIndex++;
            }
        }
        return 0;
        
    }
};