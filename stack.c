#include "./stack.h"
#include <stdlib.h>

struct node {
    char op;
    node *next;
};

int is_empty(node *list) {
    return list == NULL;
}

void push(char data, node *head) {
    node *temp = (node*) malloc(sizeof(node));
    temp -> op = data;
    temp -> next = NULL;
    node *past = head;
    while (past -> next != NULL) {
        past = past -> next;
    }
    past -> next = temp;
}

char pop(node *head) {
    char result = head -> op;
    node *temp = head;
    head = temp -> next;
    free(temp);
    return result;
}