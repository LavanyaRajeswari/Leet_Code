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
    bool isPalindrome(ListNode* head) {
    ListNode* temp;
    ListNode* prev = NULL;
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast =fast->next->next;
    }
    while(slow!=NULL){
        ListNode* data = slow->next;
        slow->next = prev;
        prev = slow;
        slow = data;
    }
    while(head!=NULL and prev!=NULL){
        if(head->val != prev->val) return false;
        head = head->next;
        prev = prev->next;
    }
    return true;
    }
};