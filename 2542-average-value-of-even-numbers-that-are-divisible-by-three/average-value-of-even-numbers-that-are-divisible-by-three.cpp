class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(int num:nums){
            if(num%6==0){
                ans+=num;
                count++;
            }
        }
        if(count!=0){
            return ans/count;
        }else{
            return 0;
        }
    }
};