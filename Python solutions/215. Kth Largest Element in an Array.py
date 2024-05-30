from queue import PriorityQueue

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        q = PriorityQueue()

        n = len(nums)
        for num in nums:
            q.put(-num)
        
        ans = 0
        while k:
            ans = q.get()
            k -= 1
    
        return -ans
        