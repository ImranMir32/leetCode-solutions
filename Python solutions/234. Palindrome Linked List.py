# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        def reversed_list(node):
            reverse = None
            while node:
                temp = ListNode(node.val) 
                temp.next = reverse
                reverse = temp
                node = node.next
            return reverse
            
        reverse_node = reversed_list(head) 
        while head:
            if head.val != reverse_node.val:
                return False
            head = head.next
            reverse_node = reverse_node.next

        return True
            