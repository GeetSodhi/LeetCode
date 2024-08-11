class Solution {
public:
    vector<int> addToArrayForm(vector<int>& arr, int k) {
       int i=arr.size()-1;
       vector<int> ans;
        while(i>=0){
            int sum=arr[i]+k;
            k=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
        while(k!=0){
            int sum=k;
            k=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};