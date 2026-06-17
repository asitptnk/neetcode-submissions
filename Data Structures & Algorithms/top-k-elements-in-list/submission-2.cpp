class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> bucket(nums.size() + 1);

        for (int n: nums) {
            count[n] =  1 + count[n];
        }

        for (const auto& i : count) {
            bucket[i.second].push_back(i.first);
        }

        vector<int> res;
        for (int i = bucket.size() - 1; i>0; --i) {
            for (int n: bucket[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
    }

};
