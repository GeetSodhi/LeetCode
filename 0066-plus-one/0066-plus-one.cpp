class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        if(d[d.size()-1]!=9){
            d[d.size()-1]++;
            return d;
        }
        int i=d.size()-1;
        while(i>=0){
            if(d[i]!=9){
                break;
            }
            d[i]=0;
            i--;
        }
        if(i>=0){
            d[i]++;
            return d;
        }
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<d.size();i++){
            ans.push_back(0);
        }
        return ans;
    }
};