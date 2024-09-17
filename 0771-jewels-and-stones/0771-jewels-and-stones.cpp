class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        for(auto i:jewels){
            st.insert(i);
        }
        int count1=0;
        for(auto j:stones){
            if(st.count(j)){
                count1++;
            }
        }
        return count1;
        
    }
};