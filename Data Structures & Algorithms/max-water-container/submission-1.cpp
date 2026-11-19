class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int lMaxHeight = 0;
        int rMaxHeight = 0;
        int mArea = 0;
        while(i<=j){
            mArea = max(mArea,min(heights[i],heights[j])*(j-i));
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return mArea;
    }
};

//i=1
//j=6;
//lmax = 1
//rmax = 6;
// result = 7