class Solution:
    def equalFrequency(self, word: str) -> bool:
        mp = {}
        for char in word:
            if char not in mp:
                mp[char] = 1
            else:
                mp[char] += 1
        
        count = list(mp.values())
       
        n = len(count)
        count.sort()
        for i in range(n):
            if count[i] - 1 == 0:
                new_count = count[:i] + count[i + 1:]
                if len(set(new_count)) == 1:
                    return True
            else:
                count[i] -= 1
                if len(set(count)) == 1:
                    return True
                count[i] += 1
                
        return False
       
            
