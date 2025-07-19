class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(),count = 0;
        for(int i=0;i<n;i++){
            count +=expandFromCentre(s,i,i);
            count +=expandFromCentre(s,i,i+1);
        }
        return count;
    }
    int expandFromCentre(string s,int l , int r){
        int cnt=0;
        while(l>=0 && r<=s.size() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
        return cnt;
    }
};