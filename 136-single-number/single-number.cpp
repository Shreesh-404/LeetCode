class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int e : nums){
            if(mp.find(e) != mp.end()) mp.at(e)++;
            else mp[e] = 1;
        }
        for(auto it: mp){
            if(it.second == 1){
                return it.first;
                break;
            }
        }
        return 0;
    }
};