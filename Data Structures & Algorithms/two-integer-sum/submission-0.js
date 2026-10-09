class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let seenValue = new Map();
        let i = 0;
        while (i < nums.length) {
            let val = target - nums[i];
            if (seenValue.has(val)) {
                return [seenValue.get(val), i];
            }
            seenValue.set(nums[i], i);
            i++;
        }
        return [];
    }
}
