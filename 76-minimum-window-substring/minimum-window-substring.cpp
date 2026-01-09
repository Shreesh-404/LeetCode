class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> mp;

        for(char c : t){
            mp[c]++;
        }

        int l = 0, r = 0;
        int cnt = 0;
        int minLen = INT_MAX;
        int sIndex = -1;

        while (r < s.length()) {
            if (mp[s[r]] > 0) {
                cnt++;
            }
            mp[s[r]]--;

            while (cnt == t.length()) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sIndex = l;
                }

                mp[s[l]]++;
                if (mp[s[l]] > 0) {
                    cnt--;
                }
                l++;
            }
            r++;
        }

        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};
