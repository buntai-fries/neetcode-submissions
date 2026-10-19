class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> freqMap = new HashMap<>();
        for (int num : nums) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }
        List<int[]> arrList = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : freqMap.entrySet()) {
            arrList.add(new int[] {entry.getValue(), entry.getKey()});
        }
        arrList.sort((a, b) -> b[0] - a[0]);
        int[] soln = new int[k];
        for(int i = 0; i < k; i++) {
            soln[i] = arrList.get(i)[1];
        }
        return soln;
    }
}
