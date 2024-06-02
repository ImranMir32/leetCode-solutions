class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        
        v = []
        v.append(nums[0])
        n = len(nums)
        for i in range(n - 1):
            if nums[i] == nums[i + 1]:
                continue
            v.append(nums[i + 1])

        ans = 0
        n = len(v)
        for i in range(1, n - 1):
            if v[i - 1] < v[i] and v[i] > v[i + 1]:
                ans += 1
            elif v[i - 1] > v[i] and v[i] < v[i + 1]:
                ans += 1

        return ans