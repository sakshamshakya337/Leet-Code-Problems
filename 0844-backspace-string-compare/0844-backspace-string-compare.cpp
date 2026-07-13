class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> t1; 

        for(char ch : s){
            if(ch=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }else{
                s1.push(ch);
            }
        }

         for(char ch : t){
            if(ch=='#'){
                if(!t1.empty()){
                    t1.pop();
                }
            }else{
                t1.push(ch);
            }
        }

        if(s1.size()==t1.size()){
            while(!s1.empty()){
                if(s1.top()==t1.top()){
                    s1.pop();
                    t1.pop();
                    
                }else{
                    return false;
                }
            }
            return true;
        }else{
            return false;
        }
    }
};