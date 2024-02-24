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
    void reorderList(ListNode* head) {
    int n = 1;
    ListNode* c = head;
    ListNode* temp = head;
    ListNode* prev = new ListNode(temp->val);
    while(c->next!=NULL){
        c = c->next;
        n++;
    }    
    temp= temp->next;
    while(temp!=NULL){
            ListNode* d = new ListNode(temp->val);
            d->next = prev;
            prev = d;
            temp = temp->next;
    }
     ListNode* tmp = head;
     temp = head; 
     int k = n;
    while(n){
        ListNode* dum1 = tmp->next;
        ListNode* dum2 = prev->next;
        tmp->next = prev;
        prev->next = dum1;
        prev = dum2;
        tmp = dum1;
        n--;
    }
    while(k-1){
        temp = temp->next;
        k--;
    }
    temp->next = NULL;
    }
};