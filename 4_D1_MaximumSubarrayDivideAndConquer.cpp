class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum=nums[0],mxsum=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            if(sum<nums[i])
                sum=nums[i];
            if(sum>mxsum)
                mxsum=sum;
        }
        return mxsum;
    }
};