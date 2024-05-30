class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = -1
        last = -1
        n = len(nums)
        for i in range(n):
            if target > nums[i]:
                first = i
            elif target == nums[i]:
                last = i

        if last != -1:
            return [first + 1, last]
        
        return [-1, -1]