class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            int t=mp[target-nums[i]];
            if(i!=t&&nums[i]+nums[t]==target)
                return {i,t};
        }
        return {-1,-1};
    }
};

