class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      
        vector<int> ans;
        vector<bool> trust(arr.size(),true);
        for(int i=0;i<arr.size();i++){
            if(trust[i]){
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    trust[j]=false;
                }
            }
            ans.push_back(count);
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    return false;
                }
            }
        }
        return true;
        
        
    }
};