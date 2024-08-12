class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
            }
            
        }
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
                t.push_back(s[i]);
            }
        }
        int i=0;
        int j=t.size()-1;
        while(i<=j){
            if(t[i]==t[j]){
                i++;
                j--;
            }
            else{
                return 0;
            }
        }
        return 1;
        
       
    }
};