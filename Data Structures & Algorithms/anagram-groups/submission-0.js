class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        const obj = {};
        for (let i of strs) {
            let str = i.split('').sort().join();
            if (!obj[str]) {
                obj[str] = [];
            }
            obj[str].push(i);
        }
        return Object.values(obj);
    }
}
