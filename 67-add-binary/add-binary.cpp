class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.length()-1;
        int j = b.length()-1;
        int carry = 0;
        string res = "";

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int e = 0;
            int f = 0;
            if(i >= 0){
                e = a[i] - '0';
            }
            if(j >= 0){
                f = b[j] - '0';
            }

            int sum = e + f + carry;
            carry = 0;

            if(sum == 1){
                res.push_back('1');
            }else if (sum == 2)
            {
                carry = 1;
                res.push_back('0');
            }else if (sum == 3) 
            {
                carry = 1;
                res.push_back('1');
            }else{
                res.push_back('0');
            }
            
            i--;
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};