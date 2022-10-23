#include "./general.h"
#include "./stack.h"

int main() {
    char *in = init();
    int len = 0;
    len = input(in);
    char out[len];
    node *list = NULL;
    int count = 0;
    int temp = 0;
    while (in[count] != '\0') {
        if ((in[count] >= 48 && in[count] <= 57) || in[count] == 33) {
            out[temp] = in[count];
            temp++;
        } else {
            if (in[count] >= 42 && in[count] <= 47) {
                push(in[count], list);
                push(' ', list);
                out[temp] = ' ';
                temp++;
            }
        }
        count++;
    }
    while (!is_empty(list)) {
        out[temp] = pop(list);
        temp++;
    }
    out[temp] = '\0';
    print(out);
    mem_free(list);
    mem_free(in);
    return 0;
}