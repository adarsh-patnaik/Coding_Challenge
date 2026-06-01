// 49. Group Anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) {
            return {};
        }

        unordered_map<string, vector<string>> ansMap;

        for (auto s : strs) {
            int count[26] = {0};
            for (char c : s) {
                count[c - 'a']++;
            }

            string key;
            for (int i = 0; i < 26; i++) {
                key += '#';
                key += to_string(count[i]);
            }
            ansMap[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& it : ansMap) {
            result.push_back(it.second);
        }

        return result;
    }
};