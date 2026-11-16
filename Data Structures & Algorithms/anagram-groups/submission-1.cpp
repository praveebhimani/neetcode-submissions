class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            vector<int>freq(26,0);
            string s = strs[i];
            for(int j=0;j<s.size();j++){
                freq[s[j]-'a']++;
            }
            string key = to_string(freq[0]);
            for(int i=1;i<26;i++){
                key += ',' + to_string(freq[i]);
            }
            mp[key].push_back(s);
        }
        vector<vector<string>>groupedAnagrams;
        for(auto it:mp){
            groupedAnagrams.push_back(it.second);
        }
        return groupedAnagrams;
    }
};
