class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }else{
            string ans=s,tem = s+s;
            for(int i=0;i<s.size();i++){
                ans = min(ans,tem.substr(i,s.size()));
            }
            return ans;
        }
    }
};
