class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ss=s.length();
        int ms=t.length();
        int i=0,j=0;
        while(i<ss&&j<ms){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        if(i==ss) return true;
        else return false;
       
    }
};