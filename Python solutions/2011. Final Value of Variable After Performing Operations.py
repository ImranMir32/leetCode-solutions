class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for value in operations:
            if value[0] == '-' or value[2] == '-':
                x -= 1
            else:
                x += 1

        return x