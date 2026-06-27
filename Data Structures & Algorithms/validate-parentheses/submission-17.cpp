class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0 || s.size() == 1){
            return false;
        }
        stack <char> par;
        for(char i : s){
            if( i == '(' || i == '[' || i == '{'){
                par.push(i);
            }
            else{
                if(par.empty()){
                    return false;
                }
            else if(!par.empty() && (par.top()=='(' && i == ')') || (par.top() == '{' && i == '}') || (par.top() == '[' && i == ']')){
               par.pop(); 
            }
            else{
                return false;
            }
            
            }
           
           
            }
    
            if(par.empty()){
                return true;
            }
            else{
                return false;
            }
    }
};
