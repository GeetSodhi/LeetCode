class Solution {
public:
 void   solve(vector<int>& arr,int index,vector<vector<int>>& ans,set<vector<int>> &st){
        if(index>=arr.size()){
            if(st.count(arr)){
                return;
            }
            ans.push_back(arr);
            st.insert(arr);
            return;
            
        }
        for(int i=index;i<arr.size();i++){
            swap(arr[i],arr[index]);
            solve(arr,index+1,ans,st);
            swap(arr[i],arr[index]);
        }
        
    }
  
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int index=0;
        solve(arr,index,ans,st);
        return ans;
      
        
    }
};