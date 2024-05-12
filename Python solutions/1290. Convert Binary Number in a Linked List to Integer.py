# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def binary_to_decimal(self, s: str) -> int:
        decimal = 0
        for digit in s:
            decimal = (decimal * 2) + int(digit)
        return decimal
        
    def getDecimalValue(self, head: ListNode) -> int:
        s = ""
        while head:
            s += str(head.val)
            head = head.next
        return self.binary_to_decimal(s)