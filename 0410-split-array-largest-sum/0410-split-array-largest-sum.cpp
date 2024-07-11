bool IsPossible(vector<int>& nums, int k,int mid){
    int SplitCount=1;
    int SubArrSum=0;
    for(int i=0;i<nums.size();i++){
        if(SubArrSum+nums[i]<=mid){
            SubArrSum=SubArrSum+nums[i];
        }
        else{
            SplitCount++;
            if(SplitCount>k || nums[i]>mid){
                return false;
            }
            SubArrSum=nums[i];
        }
        
    }
    return true;
    
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int end=sum;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(IsPossible(nums,k,mid)){
                ans=mid;
                end=mid-1;
                
                
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;
        
    }
};