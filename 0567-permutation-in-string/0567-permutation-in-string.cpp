class Solution {
public:
    bool IsEqual(int arr[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int count1[26]={0};
        int i=0;
        while(i<s1.length()){
            count1[s1[i]-'a']+=1;
            i++;
        }
        i=0;
        int k=s1.length();
        int count2[26]={0};
        while(i<k){
            count2[s2[i]-'a']+=1;
            i++;
        }
        if(IsEqual(count1,count2)){
            return true;
        }
        while(i<s2.length()){
            count2[s2[i]-'a']+=1;
            char oldchar=s2[i-k];
            count2[oldchar-'a']-=1;
            if(IsEqual(count1,count2)){
                return true;
            }
            i++;
        }
        return false;
        
        
    }
};