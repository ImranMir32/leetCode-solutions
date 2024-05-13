/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        auto getLen = [](ListNode *node) {
            int length = 0;
            while (node) {
                length++;
                node = node->next;
            }
            return length;
        };

        int lenA = getLen(headA);
        int lenB = getLen(headB);
        
        while (lenA > lenB) {
            lenA--;
            headA = headA->next;
        }
        while (lenB > lenA) {
            lenB--;
            headB = headB->next;
        }

        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};