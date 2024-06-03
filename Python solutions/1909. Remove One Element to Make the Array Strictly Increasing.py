class Solution:
    def canBeIncreasing(self, nums: List[int]) -> bool:
        def check_arr(arr):
            sz = len(arr)
            for i in range(sz - 1):
                if arr[i] >= arr[i + 1]:
                    return False
            
            return True
        
        n = len(nums)
        for i in range(n - 1):
            if nums[i] >= nums[i + 1]:
                if check_arr(nums[:i] + nums[i + 1:]):
                    return True
                if check_arr(nums[:i + 1] + nums[i + 2:]):
                    return True
                return False
            
        if check_arr(nums):
            return True
        return False

        