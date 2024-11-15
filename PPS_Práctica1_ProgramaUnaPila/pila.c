#include <stdio.h>
#include <stdlib.h>
#include "include/pila.h"

int stack[MAX_ELEMENT];
size_t number_of_elements = 0;

int pop() {
    return (number_of_elements == 0) ? -1 : stack[--number_of_elements];
}

void push(int x) {
    if (number_of_elements < MAX_ELEMENT) {
        stack[number_of_elements++] = x;
    }
}

void mostrar() {
    size_t i;

    for (i = 0; i < number_of_elements; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}