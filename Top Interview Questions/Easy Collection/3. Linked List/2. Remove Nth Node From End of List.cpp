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
    int totalNode(ListNode* head){
        int cnt = 0;
        while(head != nullptr){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = totalNode(head);
        if(m == n){
            ListNode* first = head;
            head = head->next;
            delete(first);
            return head;
        }
        
        ListNode* target = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while(curr != nullptr){
            if(m == n){
                target = curr;
                break;
            }
            prev = curr;
            curr = curr->next;
            m--;
        }
        
        prev->next = target->next;
        delete(target);
        return head;
    }
};