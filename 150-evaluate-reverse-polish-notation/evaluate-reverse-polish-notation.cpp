class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> vals;

        for (string s : tokens) {

            if (s == "+" || s=="-" || s=="*" || s=="/") {

                int b = vals.top(); 
                vals.pop();
                int a = vals.top(); 
                vals.pop();

                if (s == "+") vals.push(a+b);
                if (s == "-") vals.push(a-b);
                if (s == "*") vals.push(a*b);
                if (s == "/") vals.push(a/b);

            } else {
                vals.push(stoi(s));
            }
        }

        return vals.top();
    }
};