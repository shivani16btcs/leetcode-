//Merge Two Sorted Lists
// problem link : https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1227/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
  struct ListNode* h1 = l1;
  struct ListNode* h2 = l2;
  struct ListNode* finalH =NULL;
  struct ListNode* finalT =NULL;
   if(!h1&&!h2){
       return NULL;
   } else if(h1&&!h2){
        return h1;
   }else if(!h1&&h2){
        return h2;
   }else{
       while(h1&&h2){
       if(h1->val<h2->val){
           if(!finalH){
               finalH=h1;
           }else{
               finalT->next=h1;
           }
           finalT=h1;
           h1=h1->next;
       }else{
            if(!finalH){
               finalH=h2;
           }else{
               finalT->next=h2;
           }
            finalT=h2;
            h2=h2->next; 
       }
     }   
     if(h1){
        finalT->next=h1; 
     } 
     if(h2){
        finalT->next=h2;
     }
    return finalH;
   }
    
}