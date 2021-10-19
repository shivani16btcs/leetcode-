//Return true if there is a cycle in the linked list. Otherwise, return false.
// problem link: https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1212/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *s=head;
    struct ListNode *p=head;
    if(head == NULL || head->next == NULL){
        return false;
    }
    else{
        while(s && s->next!=NULL && s->next->next!=NULL){
            s = s->next->next;
            p = p->next;
            if(s==p){
                return true;
            }
        }
        return false;
    }
}