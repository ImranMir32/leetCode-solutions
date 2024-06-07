class Solution:
    def longestAlternatingSubarray(self, nums: List[int], threshold: int) -> int:
        n = len(nums)
        cnt = 0
        ans = 0
        for i in range(n):
            if nums[i] % 2 == 0 and nums[i] <= threshold:
                cnt = 1
                for j in range(i, n - 1):
                    if (nums[j] % 2 != nums[j + 1] % 2) and nums[j] <= threshold and nums[j + 1] <= threshold:
                        cnt += 1
                    else:
                        ans = max(ans, cnt)
                        break
            ans = max(ans, cnt)
        return ans