class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out;
        int i = 0;
        while(i < word1.size() && i < word2.size()){
            out.push_back(word1[i]);
            out.push_back(word2[i]);
            i++;
        }
        while(i < word1.size()){
            out.push_back(word1[i]);
            i++;
        }
        while(i < word2.size()){
            out.push_back(word2[i]);
            i++;
        }

        return out;
    }
};