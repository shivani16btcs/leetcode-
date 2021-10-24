//link: https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1205/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    static  struct ListNode* h1=NULL;
    static  struct ListNode* h2=NULL;
    struct ListNode* p=head; // store element address of each node in called block
    
    // if list empty return
    if(head==NULL){
        return head;
    }
    
    // do recursion
    if(head&&head->next!=NULL){
        h1=reverseList(head->next);
    }
    
    //last node become first node 
    if(head&&head->next==NULL){
        h2=p;
        h1=p;
        h2->next=NULL;
    }
    else{
       h2=h1;
       while(h2&&h2->next!=NULL){
           h2=h2->next;
       }
       h2->next=p;
       p->next=NULL; 
    }

    return h1;
}