class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        pairs = []
        n = len(score)
        for i in range(n) :
            pair = (score[i], i)
            pairs.append(pair)
        
        pairs = sorted(pairs, key=lambda x: x[0], reverse=True)

        ans = [""] * n
        cnt = 1
        for pair in pairs :
            if cnt == 1 :
                ans[pair[1]] = "Gold Medal"
            elif cnt == 2 :
                ans[pair[1]] = "Silver Medal"
            elif cnt == 3 :
                ans[pair[1]] = "Bronze Medal"
            else :
                ans[pair[1]] = str(cnt)
            cnt += 1
        
        return ans