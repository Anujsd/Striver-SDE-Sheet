int lengthOfLongestSubstring(string s) {
	unordered_set<char>st;
	int i=0,j=0,n=s.size(),ans=0;
	while(i<n&&j<n){
		if(st.find(s[j])==st.end()){
			ans=max(ans,j-i+1);
			st.insert(s[j++]);
		}else{
			st.erase(s[i++]);
		}
	}
	return ans;
}