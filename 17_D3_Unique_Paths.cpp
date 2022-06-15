class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>ans(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
        return ans[m-1][n-1];
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>curr(n,1),prev(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                curr[j]=prev[j]+curr[j-1];
            }
            swap(prev,curr);
        }
        return prev[n-1];
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>curr(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                curr[j]=curr[j]+curr[j-1];
            }
        }
        return curr[n-1];
    }
};