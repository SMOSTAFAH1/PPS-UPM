/* Macro con el tamaño máximo de la pila */
#define MAX_ELEMENT 10

/* Declaración de la pila. NO está definida */
extern int stack[MAX_ELEMENT];

/* Declaración del número de elementos. */
extern size_t number_of_elements;

/* Devuelve la cima de la pila. */
/* Si la pila está vacía retorna -1 */
/* Elimina un elemento de la pila (reduce el número de elementos) */
/* Si la pila está vacía no hace nada */
int pop();

/* Coloca el número dado en la cima de la pila
(y aumenta el número de elementos)
Si el nuevo elemento no cabe en la pila NO hace nada. */
void push(int);

/* Escribe en el canal de salida el contenido de la pila.
Este método NO se comprueba, debe servir para depurar
las soluciones */
void mostrar();