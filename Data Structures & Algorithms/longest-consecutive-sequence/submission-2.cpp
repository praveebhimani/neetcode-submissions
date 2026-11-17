class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestConsecutiveCount=0;
        unordered_set<int>numSet(nums.begin(),nums.end());
        for(int num:numSet){
            if(numSet.find(num-1)==numSet.end()){
                int count=1;
                while(numSet.find(num+count)!=numSet.end()){
                    count++;
                }
                longestConsecutiveCount=max(longestConsecutiveCount,count);
            }
        }
        return longestConsecutiveCount;
    }
};
