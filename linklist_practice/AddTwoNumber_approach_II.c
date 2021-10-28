//Add Two Numbers, submitted solution 
// problem :  https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1228/



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
    int x=0,y=0,i=0,j=0,s=0,k=0,carry=0;
    int AA[100],BB[100],CC[100];
    
    x=0;
    while(l1){
        last=l1;
        AA[x++]=l1->val;
        l1 = l1->next;
    }
    y=0;
    while(l2){
        BB[y++]=l2->val;
        l2=l2->next;
    }
    i=0;
    j=0;
    k=0;
    while(i<x&&j<y){
        
        s=AA[i++]+BB[j++]+carry;
        if(s>9){
         CC[k++]=s%10; 
          carry=1;  
        }else{
          CC[k++]=s;  
          carry=0;    
        }
    }
    
    while(i<x){
        s=AA[i++]+carry;
        if(s>9){
         CC[k++]=s%10; 
          carry=1;  
        }else{
          CC[k++]=s;  
          carry=0;    
        }
    }
    
    while(j<y){
        s=BB[j++]+carry;
        if(s>9){
         CC[k++]=s%10; 
          carry=1;  
        }else{
          CC[k++]=s;  
          carry=0;    
        }
    }
    if(carry){
       CC[k++]=carry; 
    }
    last->next=l22;
    struct ListNode* p1=l11;
    struct ListNode* p=p1;
    struct ListNode* f=NULL;
    int kk=0,ki=0;
    while(ki<k){
       kk++; 
       int a=CC[ki++];
        if(p){
            p->val=a;
            f=p;
            p=p->next;
        }
    }
    if(kk>1){
        f->next=NULL; 
    }else{
        p1->next=NULL;
    }
    return p1;  
}