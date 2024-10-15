class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        if(word1.length()==word2.length()){
            for(int i=0;i<word1.length();i++){
                merged+=word1[i];
                merged+=word2[i];
                
            }
        }
        else if(word1.length()<word2.length() && word1.length()!=1){
            for(int i =0;i<word1.length();i++){
                merged+=word1[i];
                merged+=word2[i];
            }
            //int rem = word2.length()-word1.length();
            for(int i =word1.length();i<word2.length();i++){
                merged+= word2[i];
            }
        }
        else if(word2.length()<word1.length() && word2.length()!=1){
            for(int i=0;i<word2.length();i++){
                merged+=word1[i];
                merged+=word2[i];
            }
            //int rem = word1.length()-word2.length();
             for(int i =word2.length();i<word1.length();i++){
                merged += word1[i];
            }
        }
        else if(word2.length()==1){
           merged+=word1[0];
           merged+=word2[0];
           for(int i=1;i<word1.length();i++){
            merged+=word1[i];
           }
        }

         else if(word1.length()==1){
           merged+=word1[0];
           merged+=word2[0];
           for(int i=1;i<word2.length();i++){
            merged+=word2[i];
           }
        }

        return merged;
        
    }
};