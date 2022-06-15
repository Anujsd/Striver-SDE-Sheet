int subarraysXor(vector<int> &arr, int x)
{
    map<int,int>mp;
    mp[0]++;//initial value of xorr is zero so that count
    int ans=0,xorr=0,req=0;
    for(int i=0;i<arr.size();i++){
        //current xor
        xorr^=arr[i];
        
        //required xor for answer to be x
        req=xorr^x;
        
        //add count of xorr to answer
        ans+=mp[req];
        
        mp[xorr]++;
    }
    return ans;
}

