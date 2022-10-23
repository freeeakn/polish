#ifndef STACK_H
#define STACK_H

typedef struct node node;
int is_empty(node *list);
void push(char data, node *head);
char pop(node *head);

#endif //STACK_H
