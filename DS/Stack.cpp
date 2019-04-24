/**********************************************
* Stack:
*   1) Push
*   2) Pop
*
***********************************************/

#include <iostream>

struct  node
{
    int val;
    struct node *next;
};

struct node* head = NULL;

struct node* Push(struct node* cur, int val){
  //  std::cout << "insert";
    struct node* N = (struct node*) malloc(sizeof(struct node)); 
    N->val = val;
    N->next = cur;
    cur = N;
    return cur;
}

int Pop(){
    struct node* p = head;
    head = p->next;
    return p->val;
}
void display() { 
   struct node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      std::cout<< ptr->val <<" "; 
      ptr = ptr->next; 
   } 
}

int main(){

   int i = 0;
   while(i < 20){
       i = i+2;
       head = Push(head,i);
   }

    std:: cout <<" Pilha: ";
    display();
    int val = Pop();
    std::cout << "\n" << " Removeu  " << val << "\n";
    display();
    return 0;
}