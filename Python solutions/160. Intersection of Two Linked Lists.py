# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        def getLen(node):
            length = 0
            while node:
                length += 1
                node = node.next
            return length

        lenA = getLen(headA)
        lenB = getLen(headB)
        
        while lenA > lenB:
            lenA -= 1
            headA = headA.next
        
        while lenA < lenB:
            lenB -= 1
            headB = headB.next

        while headA != headB:
            headA = headA.next
            headB = headB.next
        
        return headA


