class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (p.size() > s.size()) return res;

        vector<int> sCount(26, 0), pCount(26, 0);

        for (int i = 0; i < p.size(); i++) {
            pCount[p[i] - 'a']++;
            sCount[s[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (sCount[i] == pCount[i]) matches++;
        }

        int l = 0;
        for (int r = p.size(); r < s.size(); r++) {
            if (matches == 26) {
                res.push_back(l);
            }

            int index = s[r] - 'a';
            sCount[index]++;
            if (sCount[index] == pCount[index]) {
                matches++;
            } else if (sCount[index] - 1 == pCount[index]) {
                matches--;
            }

            index = s[l] - 'a';
            sCount[index]--;
            if (sCount[index] == pCount[index]) {
                matches++;
            } else if (sCount[index] + 1 == pCount[index]) {
                matches--;
            }

            l++;
        }

        if (matches == 26) {
            res.push_back(l);
        }

        return res;
    }
};
