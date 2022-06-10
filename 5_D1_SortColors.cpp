class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,n=nums.size();
        int j=n-1,k=0;
        while(k<=j){
            if(nums[k]==0){
                //elements  are already checked so k++
                swap(nums[i++],nums[k++]);
            }else if(nums[k]==2){
                //new elements introduced so need to check
                swap(nums[j--],nums[k]);
            }else{
                k++;
            }
        }
    }
};