#include "./general.h"
#include <stdio.h>
#include <stdlib.h>

char *init(){
    return (char*)malloc(sizeof(char));
}

void mem_free(void *allocstr) {
    if (allocstr == NULL) {
        printf("\nMemory Freed");   
    } else {
        free(allocstr);
        allocstr = NULL;
    }
}

int input(char *buff) {
    int index = 0, temp = 1;
    char sym = getchar();
    while (sym != '\n') {
        buff[(index)++] = sym;
        if(index >= temp) {
            temp *= 2;
            buff = (char*) realloc(buff, temp * sizeof(char));
        }
        sym = getchar();
    }
    buff[index] = '\0';
    return index;
}

void print(char *string) {
    int count = 0;
    while (string[count] != '\0') {
        putchar(string[count]);
        count++;
    }
    // free(string);
    // string = NULL;
}