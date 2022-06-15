class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1,num=nums[0];
        for(int i=1;i<n;i++){
            if(num==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
            if(cnt==0){
                num=nums[i];
                cnt=1;
            }  
        }
        return num;
    }
};