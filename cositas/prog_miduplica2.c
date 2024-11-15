#include "miduplica.h"

int main(void) {
	int n = 4, res;

	miduplica(&res, n);
	printf("El resultado correspondiente a la duplicacion de %d es %d\n", n, res);
	return 0;
}

/*gcc -Wall -Werror -Werror -ansi -pedantic -o prog_miduplica2 prog_miduplica2.c miduplica.c && ./prog_miduplica*/