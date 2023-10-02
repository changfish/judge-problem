class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int bit =1;
        for(int i=0;i<=n;i++){
            if(!(i&(i-1)) && i) ans.push_back(1);
            else   ans.push_back(0);
            if(i>=(bit<<1))   bit<<=1;
            else if(!i) ans[i] = 0;
            else if(i) ans[i] = ans[bit]+ans[i-bit];
            
        }
        return ans;
    }
};
