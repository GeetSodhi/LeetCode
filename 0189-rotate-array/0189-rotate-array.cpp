class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        k=k%arr.size();
        vector<int> v;
        for(int i=arr.size()-k;i<arr.size();i++){
            v.push_back(arr[i]);
        }
         for(int i = 0; i < arr.size() - k; i++) {
            v.push_back(arr[i]);
        }
        for(int i=0;i<v.size();i++){
            arr[i]=v[i];
        }
    }
};