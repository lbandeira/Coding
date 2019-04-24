/**********************************************
* Linked List:
*   1) Find a struct node
*   2) Insert a struct node
*   3) Remove a struct node
*
***********************************************/

#include <iostream>

struct  node
{
    int val;
    struct node *next;
};

struct node* head = NULL;

struct node* Find_Pos(int pos){
    int i = 0;
    struct node* cur = head;
    while ((cur != NULL)&&(i < pos)){
        cur = cur->next;
        i++;
    }
    return cur;
}

struct node* Insert(struct node* cur, int val){
  //  std::cout << "insert";
    struct node* N = (struct node*) malloc(sizeof(struct node)); 
    N->val = val;
    N->next = cur;
    cur = N;
    return cur;
}

void Remove(struct node* cur){
    struct node* p = cur->next->next;
    cur->next = p;
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
       head = Insert(head,i);
   }

    struct node* ptr = Find_Pos(5);
    std:: cout << " pos_val: " << ptr->val << " Lista: ";
    display();
    Remove(ptr);
    std::cout << "\n" << "remove" << "\n";
    display();
    return 0;
}