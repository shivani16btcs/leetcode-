// problem link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        char st[10000];
        int top=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
               st[++top]=s[i];
            }
            else if((top>-1)&&((s[i]==')'&&st[top]=='(')||(s[i]==']'&&st[top]=='[')||(s[i]=='}'&&st[top]=='{'))){
                    top--;
            }else{
                 return false;
             } 
        }
        if(top==-1){
             return true;
         }else{
            return false;
        }
   }   
};