/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int findLength(ListNode* head){
        int cnt = 0;
        while(head != nullptr){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = findLength(headA);
        int len2 = findLength(headB);
        
        while(len1 > len2){
            len1--;
            headA = headA->next;
        }
        while(len1 < len2){
            len2--;
            headB = headB->next;
        }
        
        while(headA != nullptr){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        
        return nullptr;
    }
};