/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    void rec(Node *ch, vector<int>&v) {
        while(ch != NULL) {
            v.push_back(ch->val);
            if(ch->child != NULL) {
                rec(ch->child,v);
            }
            ch = ch->next;
        }
    }
    Node* flatten(Node* head) {
        Node* ans = new Node(-1);
        Node* temp = ans;
        Node *p = NULL;
        vector<int>v;
        while(head != NULL) {
            v.push_back(head->val);
            if(head->child != NULL) {
                rec(head->child,v);
            }
            head = head->next;
        }
        for(auto it:v) {
            if(temp->val == -1) {
                temp->next = new Node(it);
                temp = temp->next;
                p = temp;
            }
            else {
                temp->next = new Node(it);
                temp = temp->next;
                temp->prev = p;
                p = temp;
            }
        }
        return ans->next;
    }
};