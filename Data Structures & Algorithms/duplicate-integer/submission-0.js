class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const myMap = new Map(nums.map((num, index) => [
            index, num
        ]));
        const seenValue = new Set();
        for (const value of myMap.values()) {
            if (seenValue.has(value)) {
                return true;
            }
            seenValue.add(value);
        }
        return false;
    }
}
