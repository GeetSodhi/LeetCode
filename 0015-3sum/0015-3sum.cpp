class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    st.insert(temp);
                    j++;
                    k--;
                }
                else if(arr[i]+arr[j]+arr[k]<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};