class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int el=*max_element(nums.begin(),nums.end());
        auto it=find(nums.begin(),nums.end(),el);
        return it-nums.begin();
        
    }
};