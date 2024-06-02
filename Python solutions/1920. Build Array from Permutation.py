class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans = []
        n = len(nums)
        for i in range(n):
            ans.append(nums[nums[i]])

        return ans