/*
  Author : Shiva Tripathi
  Descp  : Dummy Code to make use of DLL source files and create 
           an employye Database in form of Doubly Linked List
*/

#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

struct employee {
    char name[15];
    int age;
    float exp;
};

char arr_name[3][10] = {"Name1", "Name2", "Name3"};
char arr_age[3] = {25,32,33};
char arr_exp[3] = {3,10,12};

struct employee *init(struct employee* s, int i) {
    if(s) {
        sprintf(s->name,"%s",arr_name[i]);
        s->age = arr_age[i];
        s->exp = arr_exp[i];
    }
    return s;
}

void print_list(struct node *list) {
    printf("Printing list...\n");
    while(list) {
       struct employee *tmp = (struct employee *)list->data;
       printf("Name: %s\n", tmp->name);
       printf("Age: %d\n", tmp->age);
       printf("Exp: %f\n", tmp->exp);
       list = list->next;
       printf("\n");
   }
}

int main() {
    struct employee *e1 = (struct employee *) calloc (1, sizeof(struct employee));
    struct employee *e2 = (struct employee *) calloc (1, sizeof(struct employee));
    struct employee *e3 = (struct employee *) calloc (1, sizeof(struct employee));
    e1 = init(e1, 0);
    e2 = init(e2, 1);
    e3 = init(e3, 2);

    struct node *list = dll_init(e1);
    insert_end(list, e2);
    insert_end(list, e3);

    print_list(list);

    free(e1);
    free(e2);
    free(e3);
    dll_cleanup(list);
    return 0;
}
