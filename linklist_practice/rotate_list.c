//Rotate List
// problem link : https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1295/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    struct ListNode* s=head;
    struct ListNode* x;
    struct ListNode* y;
    int l=0,p=0,ls=0,c=0;
    // if list length is 0 or 1 
    // Or if k=0
    if(!head||!head->next||!k){
     return head;   
    }
    while(s){
       y=s; 
       l++;
       s=s->next; 
    }
    p=k%l;
    //if rotion is unaffect the list 
    if(!p){
        return head;
    }
    ls=l-p;
    s=head;
    while(c<ls){
       x=s; 
       c++;
       s=s->next; 
    }
    y->next=head;
    head=x->next;
    x->next=NULL;
    
    return s;
}