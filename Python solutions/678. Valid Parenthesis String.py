class Solution:
    def checkValidString(self, s: str) -> bool:
        stack = []
        stack_star = []

        n = len(s)
        for i in range(n):
            if s[i] == '(':
                stack.append((s[i], i))
            elif s[i] == '*':
                stack_star.append((s[i], i))
            else:
                if stack:
                    stack.pop()
                elif stack_star:
                    stack_star.pop()
                else:
                    return False

        if not stack:
            return True

        i = len(stack) - 1
        j = len(stack_star) - 1
        while stack or stack_star:
            if i == -1 or j == -1:
                break
            tup = stack[i]
            tup_star = stack_star[j]

            if tup[1] < tup_star[1]:
                stack.pop()
                stack_star.pop()
                i -= 1
                j -= 1
            else:
                stack_star.pop()
                j -= 1

        if not stack:
            return True

        return False

        