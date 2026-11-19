class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>result;
        for(int i=0;i<nums.size()-2;i++){
            int target = nums[i]*-1;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    result.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if((nums[j]+nums[k])<target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return vector<vector<int>>(result.begin(),result.end());
    }
};
