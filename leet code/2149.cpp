class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int sz=nums.size();
        int p=0,n=0;
        while(p<sz&&n<sz){
            while(p<sz&&nums[p]<0) p++;
            while(n<sz&&nums[n]>=0) n++;
            ans.push_back(nums[p]);
            ans.push_back(nums[n]);
            n++;
            p++;
        }
        return ans;
    }
};
