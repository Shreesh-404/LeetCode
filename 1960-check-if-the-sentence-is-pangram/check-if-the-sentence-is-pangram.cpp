class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> temp;
        if(sentence.length() < 26){
            return false;
        }
        for(char e : sentence){
            temp.insert(e);
        }
        if(temp.size() == 26){
            return true;
        }else{
            return false;
        }
    }
};