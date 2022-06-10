class Solution {
public:
    int maxSubArrayAns(vector<int>&nums,int l,int r){
        if(l>r)return INT_MIN;
        int m=(l+r)/2,lsum=0,rsum=0,sum=0;
        
        for(int i=m-1;i>=l;i--){
            sum+=nums[i];
            lsum=max(lsum,sum);
        }
        
        sum=0;
        for(int i=m+1;i<=r;i++){
            sum+=nums[i];
            rsum=max(rsum,sum);
        }
        
        return max({maxSubArrayAns(nums,l,m-1),maxSubArrayAns(nums,m+1,r),lsum+nums[m]+rsum});
    }
    
    int maxSubArray(vector<int>& nums) {
        return maxSubArrayAns(nums,0,nums.size()-1);
    }
};