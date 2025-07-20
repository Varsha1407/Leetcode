class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto& a ,auto& b){
            return a[1]<b[1];
        });

        int count=0;
        int prev=INT_MIN;

        for(auto& i : intervals){
            if(i[0]>=prev) prev=i[1];
            else count++;
        }
        return count;
    }
};