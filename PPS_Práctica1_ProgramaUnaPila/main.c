#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "include/pila.h"

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if (x < 0) {
            printf("%d\n", pop());
        } else if (x > 0) {
            push(x);
        } else {
            break;
        }
    }
	printf("0\n");
    return 0;
}
