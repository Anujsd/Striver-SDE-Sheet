class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int,int>mp;
        int sum=0,len=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                len=i+1;
            }else{
                if(mp.find(sum)==mp.end())
                    mp[sum]=i;
                else
                    len=max(len,i-mp[sum]);
            }
        }
        return len;
    }
};

