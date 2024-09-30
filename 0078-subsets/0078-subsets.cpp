class Solution {
public:
    void solve(vector<int> arr,vector<int> output,int index,vector<vector<int>> &ans){
        if(index>=arr.size()){
            ans.push_back(output);
            return;
        }
        solve(arr,output,index+1,ans);
        int elem=arr[index];
        output.push_back(elem);
        solve(arr,output,index+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(arr,output,index,ans);
        return ans;
        
    }
};