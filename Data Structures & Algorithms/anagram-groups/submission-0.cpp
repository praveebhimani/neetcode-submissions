class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s)==mp.end()){
                mp[s]={i};
            }else{
                mp[s].push_back(i);
            }
        }
        vector<vector<string>>groupedAnagrams;
        for(auto it : mp){
            vector<string>temp;
            for(int i=0;i<(it.second).size();i++){
                temp.push_back(strs[(it.second)[i]]);
            }
            groupedAnagrams.push_back(temp);
        }
        return groupedAnagrams;
    }
};
