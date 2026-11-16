class Solution {
public:
    static bool compare(pair<int,int>a, pair<int,int>b){
        return a.first>b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>eleFreqs;
        for(auto it:mp){
            eleFreqs.push_back({it.second, it.first});
        }
        sort(eleFreqs.begin(),eleFreqs.end(),compare);
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(eleFreqs[i].second);
        }
        return result;
    }
};
