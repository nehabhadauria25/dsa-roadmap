class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<=3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int m1=nums[n-3]-nums[0];
        int m2=nums[n-1]-nums[2];
        int m3=nums[n-2]-nums[1];
        return min(m3,min(m1,m2));
    }
};