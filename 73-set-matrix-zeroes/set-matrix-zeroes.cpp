class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        bool firstrow=false;
        bool firstcol=false;
        for(int j=0;j<m;j++){
            if(nums[0][j]==0){
                firstrow=true;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i][0]==0){
                firstcol=true;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(nums[i][j]==0){
                    nums[i][0]=0;
                    nums[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(nums[0][j]==0 || nums[i][0]==0){
                    nums[i][j]=0;
                }
            }
        }
        if(firstrow){
            for(int j=0;j<m;j++){
                nums[0][j]=0;
            }
        }
        if(firstcol){
            for(int i=0;i<n;i++){
                nums[i][0]=0;
            }
        }
    }
};