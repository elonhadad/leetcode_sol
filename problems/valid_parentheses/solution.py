class Solution:
    def isValid(self, s: str) -> bool:
        bracket_pairs = {')': '(', ']': '[', '}': '{'}

        stack = []
        
        for char in s:
            if char in bracket_pairs.values():
                stack.append(char)
            elif stack and bracket_pairs[char] == stack[-1]:
                stack.pop()
            else:
                return False
        
        return not stack
