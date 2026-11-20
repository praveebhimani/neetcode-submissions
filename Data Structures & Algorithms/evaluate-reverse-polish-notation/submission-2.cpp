class Solution {
public:
    int dfs(vector<string>& tokens){
        string token = tokens.back();
        tokens.pop_back();
        if(token != "+" && token != "-" && token != "*" && token != "/"){
            return stoi(token);
        }
        int rightOperand = dfs(tokens);
        int leftOperand = dfs(tokens);
        if(token == "+"){
            return leftOperand+rightOperand;
        } else if(token == "-"){
            return leftOperand-rightOperand;
        } else if(token == "*"){
            return leftOperand*rightOperand;
        } else{
            return leftOperand/rightOperand;
        } 
    }
    int evalRPN(vector<string>& tokens) {
        return dfs(tokens);
    }
};
