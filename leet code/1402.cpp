class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int sz=satisfaction.size(),ans=0;
        int dp[sz][sz];
        sort(satisfaction.begin(),satisfaction.end());
        cout<<satisfaction[0];
        for(int i=0;i<sz;i++){
            for(int j=0;j<i+1;j++){
                dp[j][i]=satisfaction[i]*(j+1);
                if(j&&i)   dp[j][i]+=dp[j-1][i-1];
            }
        }
        for(int i=0;i<sz;i++){
            ans = max(ans,dp[i][sz-1]);
        }
        return ans;
    }
};
