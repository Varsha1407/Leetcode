
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        vector<int> diff1,diff2;
        for(int i:set1){
                if(count(set2.begin(),set2.end(),i)==0){
                    diff1.push_back(i);
                }
            
        }
        for(int j:set2){
            if(count(set1.begin(),set1.end(),j)==0){
                    diff2.push_back(j);
                }
                

        }

        return {diff1,diff2};

        
    }
    
};