class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        cnt = 0
        sz = len(flowerbed)
        if sz == 1 and flowerbed[0] == 0:
            cnt += 1

        if sz >= 2:
            if flowerbed[0] == 0 and flowerbed[1] == 0:
                cnt += 1
                flowerbed[0] = 1
        
            if flowerbed[sz - 1] == 0 and flowerbed[sz - 2] == 0:
                cnt += 1
                flowerbed[sz - 1] = 1
        

        for i in range(1, sz- 1):
            if flowerbed[i - 1] == 0 and flowerbed[i] == 0 and flowerbed[i + 1] == 0:
                cnt += 1
                flowerbed[i] = 1
        
        if cnt >= n:
            return True
        return False