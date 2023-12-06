class Solution {
public:
    
    int minNumberOperations(vector<int>& target) {
        int ans,prev;
        ans = prev = target[0];
        for(int i=1;i<target.size();i++){
            if(prev<target[i]) ans+=target[i]-prev;
            prev = target[i];
        }
        return ans;
    }
};
