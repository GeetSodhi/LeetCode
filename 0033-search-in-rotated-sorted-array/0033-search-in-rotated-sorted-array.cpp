int getpivot(vector<int> &arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[end]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int binsrch(vector<int> &arr,int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
        /* code */
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot=getpivot(nums);
        if(nums[pivot]<=target&&target<=nums[nums.size()-1]){
            return binsrch(nums,pivot,nums.size()-1,target);
        }
        else{
            return binsrch(nums,0,pivot-1,target);
        }
        
    }
};