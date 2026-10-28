class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = defaultdict(int)
        for i in range(len(nums)):
            temp = target - nums[i]
            if temp in seen:
                return [seen.get(temp), i]
            seen[nums[i]] = i
        return []