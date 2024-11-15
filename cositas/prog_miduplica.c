#include <stdio.h>

void miduplica(int *res, int n) {
	*res = 2 * n;
}

int main(void) {
	int n = 4, res;
	
	miduplica(&res, n);
	printf("El resultado correspondiente a la duplicacion de %d es %d\n", n, res);
	return 0;
}