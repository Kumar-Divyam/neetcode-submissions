class Solution {
public:
    bool comp(string s1, string s2){
        return s1 == s2;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int a = 0, b = 0;
        for(int i=0; i< tokens.size(); i++){
            string s = tokens[i];
            if(s != "+" && s != "-" && s != "*" && s != "/" ){
                int t = stoi(s);
                stk.push(t);
            }
            else{
                b = stk.top(); stk.pop(); 
                a = stk.top(); stk.pop(); 
                if(s == "+")
                    a += b;
                else if(s == "-")
                    a -= b;
                else if(s == "*")
                    a *= b;
                else
                    a /= b;

                stk.push(a);
            }
            
        }
        return (stk.top());
        
    }
};
