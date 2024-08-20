class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int startrow=0;
        int startcol=0;
        int nRows=arr.size();
        int mCols=arr[0].size();
        int endrow=nRows-1;
        int endcol=mCols-1;
        int count=0;
        int total=nRows*mCols;
        while(count<total){
            for(int i=startcol;count<total && i<=endcol;i++){
                ans.push_back(arr[startrow][i]);
                count++;
            }
            startrow++;
            for(int i=startrow;count<total && i<=endrow;i++){
                ans.push_back(arr[i][endcol]);
                count++;
            }
            endcol--;
            for(int i=endcol;count<total && i>=startcol;i--){
                ans.push_back(arr[endrow][i]);
                count++;
            }
            endrow--;
            for(int i=endrow;count<total && i>=startrow;i--){
                ans.push_back(arr[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
};