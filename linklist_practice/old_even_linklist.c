// Odd Even Linked List
//problem link : https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1208/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* oddEvenList(struct ListNode* head){
    struct ListNode* finalhead;
    struct ListNode* head1;
    struct ListNode* tail1;
    struct ListNode* head2;
    struct ListNode* tail2;
    struct ListNode* S=head;
    int index=0;
    if(S==NULL){
        return NULL;
    }else if(S->next==NULL){
        return S;
    }else{
        index=1;
        while(S!=NULL){
            // EVEN
           if(index%2==0){
                 if(S==head->next){
                   head2=S;
                   tail2=S;
               }else{
                 tail2->next=S; 
                 tail2=S; 
               }  
                           printf("%d ",S->val);
           }else{         // ODD  
               if(S==head){
                   head1=S;
                   tail1=S;
               }else{
                 tail1->next=S; 
                 tail1=S;  
               }
           }
            index++;
           S=S->next; 
        }
        tail1->next=NULL;
        tail2->next=NULL;
        tail1->next=head2;
        return head1;
    }
    
}