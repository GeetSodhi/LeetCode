class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int count=0;
        int elem;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(count==0){
                elem=arr[i];
                count=1;
            }
            else if(arr[i]==elem){
                count++;
            }
            else{
                count--;
            }
            
            
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==elem){
                count1++;
            }
        }
        if(count1>(n/2)){
            return elem;
        }
        return -1;
        
    }
};