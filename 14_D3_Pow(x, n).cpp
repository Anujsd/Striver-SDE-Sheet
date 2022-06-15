class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long int nn=n;
        if(n==0)return 1;
        if(n<0)nn*=-1;
        while(nn){
            if(nn%2){
                ans*=x;
                nn--;
            }else{
                x*=x;
                nn/=2;
            }
        }
    
        return n<0?1.0/ans:ans;
    }
};

