class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        ans = 0
        happiness.sort(reverse=True)

        ans = happiness[0]
        cnt = 0
        k -= 1
        cnt = 1
        n = len(happiness)
        for i in range(1, n):
            if k == 0:
                break 
            if happiness[i] - cnt > 0:
                ans += abs(happiness[i] - cnt)
            k -= 1
            cnt += 1
        
        return ans
            
            
            

