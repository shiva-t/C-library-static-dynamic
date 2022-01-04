/*
  Doubly Linked List init and node creation functions
*/

#include <stdio.h>
#include <stdlib.h>
#include "dll.h"
#include <unistd.h>

/*Initialise the Doubly Linked List with head node creation*/
struct node *dll_init(void *data) {
    struct node *head = (struct node *) calloc(1, sizeof(struct node));
    if (head != NULL) {
        head->prev = NULL;
        head->next = NULL;
        head->data = data;
    } else {
        printf("calloc failed for init\n");
    }
    return head;
}

/*Insertion of new node at the end of DLL*/
void insert_end(struct node *head, void *data) {
    if(head == NULL) {
        printf("Head node is NULL\n");
        return;
    }
    struct node *new_node  = (struct node *) calloc(1, sizeof(struct node));
    if (new_node) {
        new_node->data = data;
    } else {
        printf("calloc for new node failed\n");
        return;
    }
    while(head->next != NULL) {
        head = head->next;
    }
    head->next = new_node;
    new_node->next = NULL;
    new_node->prev = head;
}

void print_dll(struct node *head) {
    printf("Printing DLL...\n");
    while(head) {
        printf("%d\n", *(int *)head->data);
        head = head->next;
    }
}

//Test code
/*int main() {
   void *data = NULL;
   int a = 0, b =1, c=2, d= 3;
   data = &a;
   struct node *head = dll_init(data);
   data = &b;
   insert_end(head, data);
   data = &c;
   insert_end(head, data);
   data = &d;
   insert_end(head, data);
   print_dll(head);
   delete_node(head->next->next);
   print_dll(head);

   dll_cleanup(head);
   return 0;
}*/

