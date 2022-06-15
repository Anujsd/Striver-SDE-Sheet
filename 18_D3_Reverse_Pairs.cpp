class Solution {
public:
    
    int merge(vector<int>&nums,int l,int mid,int r){
        int cnt=0;
        int n1=mid-l+1,n2=r-mid;
        int a1[n1],a2[n2];
        for(int i=0;i<n1;i++)a1[i]=nums[l+i];
        for(int i=0;i<n2;i++)a2[i]=nums[mid+1+i];
        
        int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if((long long)a1[i]>(long long)a2[j]*2)
            { 
                cnt+=(n1-i);
                j++;
            }
            else
                i++;
        }
        
        i=0,j=0; 
        while(i<n1 && j<n2)
        {
            if(a1[i]<=a2[j])
                nums[k++]=a1[i++];
            else
                nums[k++]=a2[j++];
            
        }
    
        while(i<n1){
            nums[k++]=a1[i++];
        }
        while(j<n2){
            nums[k++]=a2[j++];
        }
        return cnt;
    }
    
    void mergeSort(vector<int>&nums,int l,int r,int &cnt){
        if(l<r){
            int mid=l+(r-l)/2;
            mergeSort(nums,l,mid,cnt);
            mergeSort(nums,mid+1,r,cnt);
            cnt+=merge(nums,l,mid,r);
        }
    }
    
    int reversePairs(vector<int>& nums) {
        int cnt=0;
        mergeSort(nums,0,nums.size()-1,cnt);
        return cnt;
    }
};

