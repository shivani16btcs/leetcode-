//Palindrome Linked List
//link : https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1209/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    long int p=0;
    int A[100000];
    int flag=0;
    if(!head){
        return false;
    }else if(!head->next){
        return true;
    }else{
        while(head){
            A[p++]=head->val;
            head=head->next;
        }
        for(int i=0;i<p/2;i++){
           if(A[i]==A[p-1-i]){
               flag=1;
           }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
          return true;  
        }else{
            return false;
        }
    }
}