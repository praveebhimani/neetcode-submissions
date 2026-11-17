class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProduct=1;
        int rightProduct=1;
        int n = nums.size();
        vector<int>prodExceptSelf(n,0);
        vector<int>leftProducts(n,0);
        vector<int>rightProducts(n,0);
        for(int i=0;i<n;i++){
            leftProducts[i]=leftProduct;
            leftProduct*=nums[i];
            rightProducts[n-i-1]=rightProduct;
            rightProduct*=nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            prodExceptSelf[i] = leftProducts[i]*rightProducts[i];
        }
        return prodExceptSelf;
    }
};

// 48
// 48
// 1 1 2 8 
// 48 24 6 1