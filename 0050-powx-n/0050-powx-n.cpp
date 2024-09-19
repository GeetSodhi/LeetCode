class Solution {
public:
    double myPow(double x, int n) {
       if(n==0){
           return 1;
       }
        if(n==1){
            return x;
        }
        bool IsNeg=(n<0);
        n=abs(n);
        double ans=myPow(x,n/2);
        if(n%2==0){
            ans=ans*ans;
        }
        else{
            ans=x*ans*ans;
        }
        return (IsNeg?1/ans:ans);
        
    }
};