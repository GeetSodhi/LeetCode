class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> ans;
        vector<bool> trust(nums.size(),true);
        for(int i=0;i<nums.size();i++){
            bool flag=false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    trust[j]=false;
                    flag=true;
                }
            }
            if(trust[i]){
            if(flag==false){
                ans.push_back(nums[i]);
                
            }
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;

        
    }
};