class Solution {
public:
    int gcd_len(int a , int b){
        if(a==0){
            return b;
        }
        else{
            return gcd_len(b%a,a);
        }
    }
    string gcdOfStrings(string str1, string str2) {
        int l1=str1.length();
        int l2=str2.length();
        if(str1+str2==str2+str1){
            return str1.substr(0,gcd_len(l1,l2));
        }
        else{
            return "";
        }
    }
};