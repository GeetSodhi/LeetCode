class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
    
        
        vector<int> ans;
        for(auto i:mpp){
            if(i.second>(arr.size()/3)){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};