class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        vector<float> newnums;
        for(int num:nums1){
            newnums.push_back((double)num);
        }
        int len = newnums.size();
        double med=0;
        if(len%2==0){
            med=(newnums[len/2 - 1]+newnums[len/2])/2;;
        }
        else{
            med=newnums[(len)/2];
        }
        
        
   return med;
    }
};