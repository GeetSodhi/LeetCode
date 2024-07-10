class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long long mid=start+(end-start)/2;
        int ans=0;
        while(start<=end){
            if(mid*mid>x){
                end=mid-1;
            }
            else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }
            else{
                return mid;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};