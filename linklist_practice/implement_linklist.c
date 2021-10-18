//link to the problem :  https://leetcode.com/explore/learn/card/linked-list/209/singly-linked-list/1290/


typedef struct{
    int val;
    struct MyLinkedList *next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
        MyLinkedList* N = ( MyLinkedList*)malloc(sizeof(MyLinkedList));
        N->next=NULL;
        return N;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* s = obj->next;
    int i=0;
    if(s==NULL){
        return -1;
    }else if(index==0){
        return s->val;
    }
    else{
      while(i<index&&s){
            i=i+1;
            s=s->next;
        }
        if(i==index&&s){
          return s->val;   
        }else{
            return -1;
        }
    }
    
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
        MyLinkedList* node =  ( MyLinkedList*)malloc(sizeof(MyLinkedList));
        node->val = val;
        node->next = obj->next;
        obj->next = node;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
      MyLinkedList* s = obj;
      MyLinkedList* node = myLinkedListCreate();
        node->val= val;
        node->next= NULL;
        if(s==NULL){
            s->next=node;
        }else{
           while(s&&s->next != NULL){
               s=s->next;
           }
           s->next=node; 
        }
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
      MyLinkedList* s = obj;
      MyLinkedList* p = NULL;
        index=index+1;
      int i=0;
        MyLinkedList* node = myLinkedListCreate();
        node->val= val;
        if(index == 0){
            obj->val = val;
        } else {
           while(i < index&&s){
               p=s;
               i++;
               s=s->next;
           }
            node->next = p->next;
            p->next = node;
        }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
      MyLinkedList* s = obj->next;
      MyLinkedList* p;
      int i=0;
      if(s==NULL){
          return;
      } 
    if(index == 0){
      p=s;  
      s=s->next;
      p->next=NULL;
      obj->next=s;
        free(p);
        p=NULL;
    }
    else{
      while(i< index&&s){
        p=s;
        i=i+1;
        s=s->next;  
      }
      if(i==index&&s)  {
         p->next=s->next;
          free(s);  
      }
    }
}

void myLinkedListFree(MyLinkedList* obj) {
     MyLinkedList* s = obj;
     MyLinkedList* p;
     if(s==NULL){
            return;
    }else{
         while(s!=NULL){
             p=s;
             s=s->next;
             free(p);
         }
     }
}

/*
  * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
 */
