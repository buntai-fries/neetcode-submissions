class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (res.count(nums.at(i))) {
                return nums.at(i);
            }
            res[nums.at(i)] = i;
        }
    }
};
