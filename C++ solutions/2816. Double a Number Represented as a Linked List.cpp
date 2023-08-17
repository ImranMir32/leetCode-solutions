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
    ListNode* doubleIt(ListNode* head) {
        if(head==nullptr) return head;
        
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;
        
        ListNode* prev = nullptr;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            ListNode* nextTemp = temp->next; 
            temp->next = prev;
            
            prev = temp;
            temp = nextTemp;
        }
        
       
        
        while (prev != nullptr) {
            int sum = carry;
            sum += (prev->val + prev->val);
            prev = prev->next;
           
            
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        prev = nullptr;
        temp = dummy->next;
        
        while (temp != nullptr) {
            ListNode* nextTemp = temp->next; 
            temp->next = prev;
            
            prev = temp;
            temp = nextTemp;
        }
        
        return prev;
    }
};