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
    int binary_to_decimal(string s){
        int decimal = 0;
        for(int i=0; i<s.size();i++){
            decimal = (decimal * 2) + (s[i]-'0');
        }
        return decimal;
    }

    int getDecimalValue(ListNode* head) {
        string s = "";
        while (head != nullptr) {
            s += to_string(head->val);
            head = head->next;
        }
        return binary_to_decimal(s);
    }
};