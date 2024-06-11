class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        ans = []
        n_1 = len(arr1)
        n_2 = len(arr2)
        for i in range(n_2):
            for j in range(n_1):
                if arr2[i] == arr1[j]:
                    ans.append(arr1[j])
                    arr1[j] = -1

        arr1.sort()
        for i in range(n_1):
            if arr1[i] != -1:
                ans.append(arr1[i])
        
        return ans