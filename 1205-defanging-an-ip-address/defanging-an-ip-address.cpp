class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress = "";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                newAddress.append("[.]");
            } else {
                newAddress.push_back(address[i]);
            }
        }
        return newAddress;
    }
};