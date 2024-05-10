class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        pairs = []
        n = len(arr)
        for i in range(n):
            for j in range(i + 1, n):
                fraction = arr[i] / arr[j]
                pair = (fraction, (arr[i], arr[j]))
                pairs.append(pair)
        
        pairs = sorted(pairs, key=lambda x: x[0])
        ans = []
        ans.append(pairs[k - 1][1][0])
        ans.append(pairs[k - 1][1][1] )

        return ans
            
        

        