class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        int i=1;
        while(i<=k){
            if(i==k){
                return p.top();
            }
            p.pop();
            i++;
        }
        return -1;
        
    }
};