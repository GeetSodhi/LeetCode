class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                vector<int> nums2(nums);
        sort(nums2.begin(),nums2.end());
        int low=0;
        int high=nums2.size()-1;
        
        while(low<high){
            if(nums2[low]+nums2[high]>target){
                high--;
            }
            else if(nums2[low]+nums2[high]==target){
                
                break;
            }
            else{
                low++;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums2[low]){
                ans.push_back(i);
            }
            else if(nums[i]==nums2[high]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};