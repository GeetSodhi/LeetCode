class Solution {
public:
    int compress(vector<char>& ch) {
        int i=0;
        int ansindex=0;
        int n=ch.size();
        while(i<n){
            int j=i+1;
            while(j<n && ch[i]==ch[j]){
                j++;
            }
            ch[ansindex++]=ch[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
            for(char chs:cnt){
                ch[ansindex++]=chs;
                
            }
                       }
            i=j;
        }
        
        return ansindex;
    }
};