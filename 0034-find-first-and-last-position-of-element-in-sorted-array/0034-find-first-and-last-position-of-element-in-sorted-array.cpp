int firstocc(vector<int>&arr1,int key){
    
    int start=0;
int end=arr1.size()-1;
int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if(arr1[mid]==key){
        ans=mid;
        
        end=mid-1;
    }
    else if (arr1[mid]<key){
        start=mid+1;
    }
    else if(arr1[mid]>key){
        end=mid-1;
    }
    mid =start+(end-start)/2;
    /* code */
}
return ans;

}
int lastoccur(vector<int>& arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(arr[mid]<key){
            start=mid+1;


        }
        else if(arr[mid]>key){
            end=mid-1;
        }
mid=start+(end-start)/2;
        /* code */
    }
    return ans;
    
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstocc(nums,target);
        int last = lastoccur(nums, target);
        return {first, last};
    }
};