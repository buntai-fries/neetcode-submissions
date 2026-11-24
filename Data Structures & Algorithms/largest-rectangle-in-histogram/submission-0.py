class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        max_area = 0
        res = []
        for i in range(n + 1):
            while res and (i == n or heights[res[-1]] >= heights[i]):
                height = heights[res.pop()]
                width = i if not res else i - res[-1] - 1
                max_area = max(max_area, height * width)
            res.append(i)
        return max_area