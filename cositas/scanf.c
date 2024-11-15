#include <stdio.h>

int main() {
    int n;
	char s[5];

    scanf("%d%s", &n, s);
    n++;
    printf("%d\n", n);
	printf("%s", s);
    return 0;
}