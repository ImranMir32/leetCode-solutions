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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = even;
        
        int cnt = 1;
        while(even != nullptr && even->next != nullptr){
            if(cnt % 2){
                odd->next = even->next;
                odd = odd->next;
            }
            else{
                even->next = odd->next;
                even = even->next;
            }
            cnt++;
        }
        odd->next = temp;
        return head;
    }
};