class Solution {
public:
    int reverse(int n) {
        long long ans=0;
        while(n!=0){
            int digit=n%10;
            ans=ans*10+digit;
            n/=10;
        }
        if(ans<INT_MIN || ans>INT_MAX){
            return 0;
        }
        return int(ans);
    }
};