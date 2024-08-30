class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                unordered_map<int,int> mpp;
                for(int i=0;i<nums.size();i++){
                    int MoreNeed=target-nums[i];
                    if(mpp.find(MoreNeed)!=mpp.end()){
                        return {mpp[MoreNeed],i};
                    }
                    mpp[nums[i]]=i;
                }
        return {-1,-1};
    }
};