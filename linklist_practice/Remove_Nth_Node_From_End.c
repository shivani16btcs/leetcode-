/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* s=head;
    int length=0,step=0,steps=0;
    if(s == NULL){
        length=0;
    }else if(s->next == NULL){
        head=NULL;
    }else{
        length=1;
        //find length
        while(s->next != NULL){
            length++;
            s=s->next;
        }
        // step from starting
        step=length-n;
        s=head;
        // if first elment need to delete
        if(step==0){
            head=head->next;
        }else{
            while(step&&step!=1){
            s=s->next;
            step--;
            }
            if(s->next){
                    s->next=s->next->next;
            }  
        }
    };
    return head;
}