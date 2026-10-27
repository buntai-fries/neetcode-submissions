class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        seen = defaultdict(int)
        for i in range(len(numbers)):
            temp = target - numbers[i]
            if (seen[temp]):
                return [seen[temp], i + 1]
            seen[numbers[i]] = i + 1
        return []