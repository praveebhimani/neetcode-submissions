class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>result;
        for(int i=0;i<nums.size()-2;i++){
           for(int j=i+1;j<nums.size()-1;j++){
            int target = (nums[i]+nums[j])*-1;
            int l = j+1;
            int r = nums.size()-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(target == nums[mid]){
                    result.insert({nums[i],nums[j],nums[mid]});
                    l=mid+1;
                    r=mid-1;
                }else if(target<nums[mid]){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
           } 
        }
        return vector<vector<int>>(result.begin(),result.end());
    }
};
