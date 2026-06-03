// 347. Top K Frequent Elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size())
            return nums;

        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>> freq;
        for (auto p : mp) {
            freq.push({p.second, p.first});
        }

        vector<int> result;
        while (k--) {
            result.push_back(freq.top().second);
            freq.pop();
        }

        return result;
    }
};