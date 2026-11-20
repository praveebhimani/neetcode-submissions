class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        int n = temperatures.size()-1;
        vector<int>result(n+1,0);
        result[n]=0;
        st.push({temperatures[n],n});
        for(int j=n-1;j>=0;j--){
            while(!st.empty()){
                if(st.top().first>temperatures[j]){
                    result[j]=st.top().second-j;
                    break;
                }else{
                    st.pop();
                }
            }
            st.push({temperatures[j],j});
        }
        return result;
    }
    //1 4 1 2 1 0 0
    //{30,0}{38,1}{40,5}
};
