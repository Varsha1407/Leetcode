class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0; 
    int highestAltitude = 0;


    for (int g : gain) {
        currentAltitude += g; // Update the current altitude
        highestAltitude = max(highestAltitude, currentAltitude); // Update the highest altitude
    }

    return highestAltitude;
    }
};