
class Solution {
public:
    int max_element(vector<int>& a){
        int maxele=0;
        for(int i=0;i<a.size();i++){
        if(a[i]>maxele){
            maxele=a[i];
        }
    }
        return maxele;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool>kids;
    int n=candies.size();
    for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=max_element(candies)){
            kids.push_back(true);
        }else{
            kids.push_back(false);
        }
    }
    return kids;
    }
};