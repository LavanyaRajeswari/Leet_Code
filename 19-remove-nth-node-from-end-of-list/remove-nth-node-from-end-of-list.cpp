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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    ListNode* temp1 = head;
    int c = 0;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }    
    int x = c-n;
    int y=0;
    if(x==0){
        head = head->next;
        return head;
    }
    while(temp1!=NULL){
        y++;
        if(y == x){
            temp1->next = temp1->next->next;
            return head;
        }
        temp1 = temp1->next;
    }
    return NULL;
    }
};