class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bin(n);
        return bin.count();
    }
};