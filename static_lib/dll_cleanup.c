/*
  Doubly Linked List: cleanup and node delete functions
*/

#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

/*To delete a node from the DLL*/
void delete_node(struct node *del_n) {
    struct node *p_node = del_n->prev;
    p_node->next = del_n->next;
    struct node *n_node = del_n->next;
    n_node->prev = del_n->prev;

    free(del_n);
}

/*Release memory used by DLL*/
void dll_cleanup(struct node *head) {
    struct node *tmp = NULL;

    while(head) {
        tmp = head->next;
        free(head);
        head = tmp;
    }
     printf("DLL cleanedup\n");
}
