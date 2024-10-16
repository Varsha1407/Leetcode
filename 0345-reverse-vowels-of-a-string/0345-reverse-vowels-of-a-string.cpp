class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> arr={'a','e','i','o','u','A','E','I','O','U'};
        int left = 0;
        int right = s.size()-1;
       while (left < right) {
    
    if (arr.find(s[left]) == arr.end()) {
        left++;
    } else if (arr.find(s[right]) == arr.end()) {
        right--;
    } else {
        
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
    return s;
    }  
    
};