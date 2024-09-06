class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
      int carry=0;
        int i=arr.size()-1;
        vector<int> ans;
        int sum=arr[i]+carry+1;
        carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        i--;
        while(i>=0){
            sum=carry+arr[i];
            
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
            
        }
        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};