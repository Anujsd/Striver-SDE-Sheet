public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int t=n;
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                t=i;
                break;
            }
        }
        
        if(t==n){
            reverse(nums.begin(),nums.end());
        }else{
            for(int i=n-1;i>t;i--){
                if(nums[t]<nums[i]){
                    swap(nums[t],nums[i]);
                    reverse(nums.begin()+t+1,nums.end());
                    break;
                }
            }
        }
    }
};


