#include "./general.h"

int main() {
    char *str = (char*)malloc(sizeof(char));
    str = input();
    print(str);
    return 0;
}