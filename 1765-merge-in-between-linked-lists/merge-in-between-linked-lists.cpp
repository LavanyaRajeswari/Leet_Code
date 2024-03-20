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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL) return NULL;
        if(list2==NULL) return list1; 
        ListNode* f = list1;
        ListNode* s = list1;
        ListNode* x;
        ListNode* y;
        int c = 0;
        int d = 0;
        while(f->next!=NULL && s!=NULL)
        {
            if(c==(a-1))
            {
                x = f;
            }
            if(d==b)
            {
                y = s;
              
            }
            f = f->next;
            s = s->next;
            c++;
            d++;
        }
        if(s!=NULL)
        {
            if(s->val==b)
            {
                 y = s;
            }
        }
        cout<<c;
        ListNode* e = list2;
        while(e->next!=NULL)
        {
            e = e->next;
        }
        x->next=list2;
        e->next=y->next;
        return list1;
    }
};