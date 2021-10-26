// question:  Remove Linked List Elements 
//link :https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1207/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* s=head;
    struct ListNode* p=head;
    struct ListNode* head1=head;
    struct ListNode* prev=NULL;

    if(s==NULL){
        return NULL;
    }else if(s->next==NULL){
        if(s->val==val){
          return NULL;
        }else{
            return s;
        }
    }else{
       while(s){ 
            // printf("%d ",s->val);
           if(s->val==val){
               if(s==head1){
                 head1=head1->next;
                  p=s;
                 // free(p);
                 // p=NULL;
               }else{
                   prev->next=s->next;
                   p=s;
                 // free(p);
                 // p=NULL;
               } 
           }else{
             prev=s;  
           }
           s=s->next;
       } 
        
        return head1;
    }
}