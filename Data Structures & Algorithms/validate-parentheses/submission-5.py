class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pairs = {')': '(', '}': '{', ']': '['}
        for char in s:
            if char in pairs:
                if not stack:
                    return False
                top_element = stack.pop()
                if top_element != pairs[char]:
                    return False
            else:
                stack.append(char)

        return len(stack) == 0
