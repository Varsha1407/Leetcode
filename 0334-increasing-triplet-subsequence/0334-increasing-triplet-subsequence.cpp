#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        int fi = -1, si = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= first) {
                first = nums[i];
        
            } else if (nums[i] <= second) {
                second = nums[i];
                
            } else {
                
                    return true;
                
            }
        }

        return false;
    }
};
