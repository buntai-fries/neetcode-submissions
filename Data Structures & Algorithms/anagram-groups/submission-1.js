class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        const sublist = new Map();
        for (const i of strs) {
            let key = i.split('').sort().join();
            if (!sublist.has(key)) {
                sublist.set(key, []);
            }
            sublist.get(key).push(i);
        }
        return Array.from(sublist.values());
    }
}
