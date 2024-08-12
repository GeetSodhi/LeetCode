class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26]={0};
        for(int i=0;i<s.size();i++){
            chars[s[i]-'a']=chars[s[i]-'a']+1;
        }
        int cha[26]={0};
        for(int i=0;i<t.size();i++){
            cha[t[i]-'a']=cha[t[i]-'a']+1;
        }
      for(int i=0;i<26;i++){
          if(chars[i]!=cha[i]){
              return false;
          }
      }
        return true;
        
    }
};