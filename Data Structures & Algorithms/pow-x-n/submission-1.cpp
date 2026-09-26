class Solution {
public:
    double f(double x,int n){
        if(x==0){
            return 0;
        }
        if(n==1){
            return x;
        }
        double half=f(x,n/2.0);
        if(n%2==0){
            return half*half;
        }
        return x*half*half;
    }
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        double ans=f(x,abs(n));
        if(n>0){
            return ans;
        }
        return 1/ans;
    }
};
