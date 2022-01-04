/*
  Header file for DLL
*/

#ifndef __DLL__
#define __DLL__

struct node {
    void *data;
    struct node *next;
    struct node *prev;
};

/*Initialise the Doubly Linked List with head node creation*/
struct node *dll_init(void *data);

/*Insertion of new node at the end of DLL*/
void insert_end(struct node *head, void *data);

/*To delete a node from the DLL*/
void delete_node(struct node *del_n);

/*To print a DLL*/
void print_dll(struct node *head);

/*Release memory used by DLL*/
void dll_cleanup(struct node *head);

#endif
