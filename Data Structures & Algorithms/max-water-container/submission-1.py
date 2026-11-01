class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1
        max_num = 0
        while (l < r):
            max_num = max(min(heights[l], heights[r]) * (r - l), max_num)
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        return max_num