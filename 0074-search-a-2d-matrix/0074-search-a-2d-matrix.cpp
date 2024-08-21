class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int end=m*n-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int elem=matrix[mid/n][mid%n];
            if(elem==target){
                return 1;
            }
            else if(elem <target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return 0;
        
    }
};