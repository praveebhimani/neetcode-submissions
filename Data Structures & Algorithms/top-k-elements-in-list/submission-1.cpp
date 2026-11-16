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
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(auto it : mp){
            heap.push({it.second, it.first});
            if(heap.size()>k){
                heap.pop();
            }
        }
        vector<int>result;
        while(!heap.empty()){
            auto ele = heap.top();
            heap.pop();
            result.push_back(ele.second);
        }
        return result;
    }
};
