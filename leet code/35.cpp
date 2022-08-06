class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r,l,mid;
        l=0;
        r=nums.size()-1;
        while(l<=r){
            mid=(l+r)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return r+1;
    }
};
