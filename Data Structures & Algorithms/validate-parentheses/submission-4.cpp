class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            // 1. If it's an opening bracket, push its exact matching partner
            if (s[i] == '(') stk.push(')');
            else if (s[i] == '{') stk.push('}');
            else if (s[i] == '[') stk.push(']');
    
            // 2. when it's a closing bracket
            else {
                // Just check if it matches the expected bracket at the top of the stack
            if (stk.empty() || stk.top() != s[i]) {
                return false;
        }
        stk.pop(); // It matched, so pop it
    }
}
        if(stk.empty())
            return true;
        return false;
        
    }
};
