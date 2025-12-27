class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int> lastSeen = {{0, -1},{1, -1},{2, -1}};
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            lastSeen[s[i] - 'a'] = i;
            count += 1 + min(lastSeen[0], min(lastSeen[1],lastSeen[2]));
        }
        return count;
    }
};