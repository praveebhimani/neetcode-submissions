class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,int>mapForS;
        unordered_map<char,int>mapForT;
        for(int i=0; i<s.length(); i++){
            mapForS[s[i]]++;
            mapForT[t[i]]++;
        }
        for(auto it: mapForS){
            if(it.second != mapForT[it.first]){
                return false;
            }
        }
        return true;
    }
};
