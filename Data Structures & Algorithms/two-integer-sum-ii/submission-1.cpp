class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            int tmp = target - nums[i];
            while(l<=r){
                int mid = (l+r)/2;
                if(tmp == nums[mid]){
                    return {i+1, mid+1};
                }else if(tmp<nums[mid]){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        return {};
    }
};
