class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMaxHeight(n,0);
        vector<int>rightMaxHeight(n,0);
        leftMaxHeight[0]=height[0];
        for(int i=1;i<n;i++){
            leftMaxHeight[i] = max(leftMaxHeight[i-1],height[i]);
        }
        rightMaxHeight[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--){
            rightMaxHeight[j] = max(rightMaxHeight[j+1],height[j]);
        }
        int trappedWaterAmount = 0;
        for(int i=0;i<n;i++){
            int minHeight = min(leftMaxHeight[i],rightMaxHeight[i]);
            // if(minHeight>height[i]){
                trappedWaterAmount += minHeight-height[i];
            // }
        }
        return trappedWaterAmount;
    }
};
