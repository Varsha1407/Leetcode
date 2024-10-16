class Solution {
public:
    string reverseWords(string s) {
        string rev;
        istringstream stream(s);
        string word;
        vector<string> words;
        while(stream >> word){
            words.push_back(word);
        }
        int len=words.size();
        for(int i=len-1;i>=0;i--){
            rev+=words[i];
            if(i!=0){
                rev+=" ";
            }
        }
        return rev;
        }
    
};