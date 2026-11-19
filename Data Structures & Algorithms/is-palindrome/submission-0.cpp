class Solution {
public:
    bool isPalindrome(string s) {
        string tempString = "";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                tempString.push_back(tolower(s[i]));
            }
        }
        int i=0;
        int j=tempString.length()-1;
        while(i<=j){
            if(tempString[i]!=tempString[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
