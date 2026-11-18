class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string ans;
        for(char c:s){
            if(c!='0'){
                ans+=c;
            }
        }
        if(ans.empty()) return 0;
        return stoll(ans);
    }
};