class Solution {
public:
    int minLength(string s) {
       
        while(true){
             int pos1=s.find("AB");
        int pos2=s.find("CD");
            if(pos1 == string::npos && pos2 == string::npos){
                break;
            }
            if(pos1!=-1){
                s.erase(pos1,2);
}
            else if(pos2!=-1){
                s.erase(pos2,2);
            }
        }
       
     
        return s.size();
        
    }
};