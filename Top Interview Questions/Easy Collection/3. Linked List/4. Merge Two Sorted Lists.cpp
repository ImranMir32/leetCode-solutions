/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* list = &dummy;
        
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                list->next = list1;
                list1 = list1->next;
            } else {
                list->next = list2;
                list2 = list2->next;
            }
            list = list->next;
        }
       
        if (list1 != nullptr) {
            list->next = list1;
        } else {
            list->next = list2;
        }
        
        return dummy.next;
    }
};
