class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMaxHeight(n,0);
        vector<int>rightMaxHeight(n,0);
        int maxi=0;
        for(int i=0;i<n;i++){
            leftMaxHeight[i]=maxi;
            maxi = max(maxi,height[i]);
        }
        maxi=0;
        for(int j=n-1;j>=0;j--){
            rightMaxHeight[j]=maxi;
            maxi = max(maxi,height[j]);
        }
        int trappedWaterAmount = 0;
        for(int i=0;i<n;i++){
            int minHeight = min(leftMaxHeight[i],rightMaxHeight[i]);
            if(minHeight>height[i]){
                trappedWaterAmount += minHeight-height[i];
            }
        }
        return trappedWaterAmount;
    }
};
