class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int l = 0;
        int count = 0;
        int n = s.length();

        for (int r = 0; r < n; r++) {
            mp[s[r]]++;

            while (mp.size() == 3) {
                count += (n - r);
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        return count;
    }
};
