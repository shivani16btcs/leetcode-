// Add Two Numbers
// question link : https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1228/
//  work for limited rage of link list i.e 10 to 15 only
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* l11=l1;
    struct ListNode* l22=l2;
    struct ListNode* last=NULL;

   unsigned long long int A=0,B=0,A1=0,B1=0,C,x=0,y=0;
   struct ListNode* H=NULL;
   struct ListNode* T=NULL;
    while(l1){
        last=l1;
        A=A*10+l1->val;
        l1=l1->next;
        x++;
    }
    while(l2){
        B=B*10+l2->val;
        l2=l2->next;
        y++;
    }
    while(A){
        int a=A%10;
        A1=A1*10+a;
        A=A/10;
    }
    while(B){
        int a=B%10;
        B1=B1*10+a;
        B=B/10;
    }
    C=A1+B1;
    last->next=l22;
    struct ListNode* p1=l11;
    struct ListNode* p=p1;
    struct ListNode* f=NULL;
    int k=0;
    while(C){
       k++; 
       int a=C%10;
        if(p){
            p->val=a;
            f=p;
            p=p->next;
        }
        C=C/10;
    }
    if(k>1){
        f->next=NULL; 
    }else{
        p1->next=NULL;
    }
    return p1;  
}