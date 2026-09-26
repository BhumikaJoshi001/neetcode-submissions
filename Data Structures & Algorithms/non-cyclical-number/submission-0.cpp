class Solution {
public:
    int f(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum=sum+rem*rem;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>s;
        
        while(true){
            if(n==1){
                return true;
            }
            s.insert(n);

            n=f(n);
            if(s.find(n)!=s.end()){
                return false;
            }

        }
        return false;
    }
};
