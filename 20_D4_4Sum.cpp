class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            int t3=target-nums[i];
            
            for(int j=i+1;j<nums.size();j++){
                
                int t2=t3-nums[j];
                int l=j+1,r=nums.size()-1;
                
                while(l<r){
                    int sum=nums[l]+nums[r];
                    if(sum<t2)l++;
                    else if(sum>t2)r--;
                    else{
                        int num3=nums[l],num4=nums[r];
                        ans.push_back({nums[i],nums[j],num3,num4});
                        while(l<r&&num3==nums[l])l++;
                        while(l<r&&num4==nums[r])r--;
                    }
                }
                while(j+1<nums.size()&&nums[j]==nums[j+1])j++;
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};

