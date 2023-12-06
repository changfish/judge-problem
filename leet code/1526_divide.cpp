class Solution {
public:
    int ans=0;
    void f(vector<int>& target,int l,int r,int h){
        if(l==r) return;
        int mn=target[l],mx=target[l],pos=l;
        for(int i=l;i<r;i++){
            mx=max(mx,target[i]);
            if(target[i]<mn){
                pos = i;
                mn=target[i];
            }
        }
        ans+=mn-h;
        if(mx==h) return;
        else{
            f(target,l,pos,mn);
            f(target,pos+1,r,mn);
        }
    }

    int minNumberOperations(vector<int>& target) {
        f(target,0,target.size(),0);
        return ans;
    }
};
