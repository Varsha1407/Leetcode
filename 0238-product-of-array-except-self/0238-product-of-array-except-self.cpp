class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> product(len,1);
        int l=1;
        int r=1;
        for(int i=0;i<len;i++){
            product[i]=l;
            l*=nums[i];
        }
        for(int i=len-1;i>=0;i--){
            product[i]*=r;
            r*=nums[i];

        }
        return product;
    }
};