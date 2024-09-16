class Solution {
public:
    int findMinDifference(vector<string>& s) {
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            
            string sub=s[i];
            int h=stoi(sub.substr(0,2));
            int m=stoi(sub.substr(3,2));
            int num=h*60+m;
            ans.push_back(num);
            
            
        }
        sort(ans.begin(),ans.end());
        int mindiff=INT_MAX;
        for(int i=1;i<ans.size();i++){
            int mini=ans[i]-ans[i-1];
            if(mini<mindiff){
                mindiff=mini;
            }
            
        }
        return min(mindiff,24*60-ans[ans.size()-1]+ans[0]);
        
    }
};