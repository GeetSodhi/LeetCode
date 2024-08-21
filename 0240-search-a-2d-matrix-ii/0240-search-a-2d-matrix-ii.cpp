class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int RowIndex=0;
        int ColIndex=mat[0].size()-1;
        while(RowIndex<mat.size() && ColIndex>=0){
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