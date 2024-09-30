class Solution {
public:
    void solve(vector<int> arr,vector<int> output,int index,vector<vector<int>> &ans,  set<vector<int> >&st){
        if(index>=arr.size()){
            if(st.count(output)){
                return;
            }
            
            ans.push_back(output);
            st.insert(output);
            return;
        }
        solve(arr,output,index+1,ans,st);
        int elem=arr[index];
        output.push_back(elem);
        solve(arr,output,index+1,ans,st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        set<vector<int> >st;
        solve(arr,output,index,ans,st);
        return ans;
        
    }
};