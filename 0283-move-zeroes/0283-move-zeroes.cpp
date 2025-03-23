class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int zeroes=count(nums.begin(),nums.end(),0);
        for(int num:nums){
            if(num==0){
                auto newEnd=remove(nums.begin(),nums.end(),0);
                nums.erase(newEnd,nums.end());
            }
        }
        for(int i=0;i<zeroes;i++){
            nums.push_back(0);
        }
        
    }
};