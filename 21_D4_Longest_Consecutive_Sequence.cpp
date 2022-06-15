class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        for(auto i:nums)st.insert(i);
        for(auto i:nums){
            if(st.find(i-1)==st.end()){
                int cnt=1;
                while(st.find(i+cnt)!=st.end()){
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};

