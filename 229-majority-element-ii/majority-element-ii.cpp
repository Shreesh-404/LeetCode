class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        unordered_set<int> blk;
        int cond = nums.size()/3;
        for (int i = 0; i < nums.size(); i++)
        {
            if(blk.contains(nums[i])) continue;
            mp[nums[i]]++;
            if(mp[nums[i]] > cond){
                blk.insert(nums[i]);
                res.push_back(nums[i]);
            }

        }
        return res;
    }
};