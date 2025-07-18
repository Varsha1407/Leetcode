class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int left=0,right=0,maxlen=0,maxcount=0;
        while(right<s.size()){
            count[s[right]-'A']++;
            maxcount=max(maxcount,count[s[right]-'A']);
            right++;
        
        if((right-left)-maxcount > k){
            count[s[left]-'A']--;
            left++;
        }
        maxlen=max(maxlen,right-left);
        }
        return maxlen;
    }
};