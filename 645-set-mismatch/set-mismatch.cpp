class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int val:nums){
            mp[val]++;
        }
        int duplicate=0;
        int missing=0;
        for(int i=1;i<=n;i++){
            if(mp[i]==2){
                duplicate=i;
            }
            if(mp[i]==0){
                missing=i;
            }
        }
        return {duplicate,missing};
    }
};