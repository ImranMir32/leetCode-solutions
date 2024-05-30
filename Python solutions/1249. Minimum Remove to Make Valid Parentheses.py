class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []
        to_remove = set()
        n = len(s)
        
        for i in range(n):
            if s[i] == '(':
                stack.append(i)
            elif s[i] == ')':
                if stack:
                    stack.pop()
                else:
                    to_remove.add(i)
        
        while stack:
            to_remove.add(stack.pop())


        result = []
        for i in range(n):
            if i not in to_remove:
                result.append(s[i])
        
        return ''.join(result)

