class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        _dict = {}
        for i in range(len(nums)):
            _target = target - nums[i]
            if _target in _dict:
                return [_dict.get(_target), i]
            _dict.update({nums[i]: i})
        return [0]