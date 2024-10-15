class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                bool prevpos = (i == 0) || (flowerbed[i - 1] == 0);
                bool nextpos = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                
                if (prevpos && nextpos) {
                    
                    flowerbed[i] = 1;
                    n--;
                   
                    i++;
                }
            }
            if (n == 0) {
                return true;
            }
        }
        return false;
    }
};
