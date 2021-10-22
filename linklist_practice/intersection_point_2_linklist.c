//question lisk : https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1215/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *A=headA;
    struct ListNode *B=headB;
    int LA=0,LB=0,L=0;
    
    // length A
    if(A==NULL){
        LA=0;
    }else if(A->next==NULL){
        LA=1;
    }else{
         LA=1;
        while(A->next!=NULL){
            LA=LA + 1;
            A=A->next;
        }
    }
    
    // length B
    if(B==NULL){
        LB=0;
    }else if(B->next==NULL){
        LB=1;
    }else{
        LB=1;
        while(B->next!=NULL){
            LB=LB + 1;
            B=B->next;
        }
    }
    
    // move head at same size of both linklist
    L= LA>=LB ? LA-LB : LB-LA;
    A=headA;
    B=headB;
    if(L!=0){
        if(LA>LB){
            while(L!=0){
                A=A->next;
                L=L-1;
            }
        }else{
            while(L!=0){
                B=B->next;
                L=L-1;
            } 
        }
    }
    
    while(A!=B&&A&&B){
        A=A->next;
        B=B->next;
    }
    
    if(A==B){
            return A;
    }else{
        return NULL;
    }
    
    
}