#include "./general.h"
#include <stdio.h>
#include <stdlib.h>

char *init(){
    return (char*)malloc(sizeof(char));
}

char *input() {
    int index = 0;
    char *buff = (char*) malloc(sizeof(char));
    char sym = getchar();
    while (sym != '\n') {
        buff[(index)++] = sym;
        buff = (char*) realloc(buff, (index + 1) * sizeof(char));
        sym = getchar();
    }
    buff[index] = '\0';
    return buff;
}

void print(char *string) {
    int count = 0;
    while (string[count] != '\0') {
        printf("%c", string[count]);
        count++;
    }
    free(string);
    string = NULL;
}