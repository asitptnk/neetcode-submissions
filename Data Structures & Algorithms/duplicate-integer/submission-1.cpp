class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;
        for (int n:nums) {
            if (count.find(n) != count.end()) {
                return true;
            } else {
                count.insert(n);
            }
        }
        return false;
    }
};