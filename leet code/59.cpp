class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int i=1,j,l=0,r=n-1,t=0,b=n-1;
        while(i<=n*n){
            for(j=l;j<=r;j++){
                ans[t][j]=i;
                i++;
            }
            t++;
            for(j=t;j<=b;j++){
                ans[j][r]=i;
                i++;
            }
            r--;
            for(j=r;j>=l;j--){
                ans[b][j]=i;
                i++;
            }
            b--;
            for(j=b;j>=t;j--){
                ans[j][l]=i;
                i++;
            }
            l++;
        }
        return ans;
    }
};  
