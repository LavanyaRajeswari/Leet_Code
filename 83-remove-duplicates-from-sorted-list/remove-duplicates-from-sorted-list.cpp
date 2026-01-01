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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        int cur = -1;
        ListNode* prev = head;
        while(temp != NULL) {
            if(cur == temp->val) {
                temp = prev;
                temp->next = temp->next->next;
            }
            if(cur != temp->val) {
                cur = temp->val;
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};