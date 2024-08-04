class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        if(digit[digit.size()-1]!=9){
            digit[digit.size()-1]++;
            return digit;
        }
        int i=digit.size()-1;
        while(i>=0){
            if(digit[i]!=9){
                digit[i]++;
                return digit;
                break;
            }
            else{
                digit[i]=0;
                i--;
            }
        }
        
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<digit.size();i++){
            ans.push_back(0);
        }
        return ans;
    }
};