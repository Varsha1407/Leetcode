class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> occurences;
        vector<int> checked;
        int unique=0;
        for(int num:arr){
            if(find(checked.begin(),checked.end(),num)==checked.end()){
            int c=count(arr.begin(),arr.end(),num);
            occurences.push_back(c);
            checked.push_back(num);
        }
        }
        for(int num:occurences){
            if(count(occurences.begin(),occurences.end(),num)==1){
                unique++;
            }
        }
        cout<<unique;
        if(unique==occurences.size()) return true;
        else return false;
        
    }
};