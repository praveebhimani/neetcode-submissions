class Solution {
public:
    bool isPalindrome(string s) {
        // string tempString = "";
        // for(int i=0;i<s.length();i++){
        //     if(isalnum(s[i])){
        //         tempString.push_back(tolower(s[i]));
        //     }
        // }
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
