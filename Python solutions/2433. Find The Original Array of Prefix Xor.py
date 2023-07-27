class Solution(object):
    def findArray(self, pref):
        """
        :type pref: List[int]
        :rtype: List[int]
        """
        ans=[]
        ans.append(pref[0])
        for i in range(1, len(pref)):
            ans.append(pref[i-1]^pref[i])      
        return ans