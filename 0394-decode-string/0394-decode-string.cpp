class Solution {
public:
    string decodeString(string s) {
        stack<string> str;
        stack<int> nums;
        string res="";
        int num=0;
        for(char c: s){
            if(isdigit(c)){
                num=num*10+(c-'0');
            }
            else if(c=='['){
                nums.push(num);
                str.push(res);
                num=0;
                res="";
            }
            else if(c==']'){
                string temp=res;
                int count=nums.top();
                nums.pop();
                res=str.top();
                str.pop();

                for(int i=0;i<count;i++){
                    res+=temp;
                }
            }
            else{
                res+=c;
            }
        }
         return res; 
    }
};