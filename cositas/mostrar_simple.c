#include <stdio.h>

#define TAMANO 80

int main(int argc, char *argv[]) {
	char linea[TAMANO + 1];
	FILE *fentrada, *fsalida;

	if(argc < 2) return 1;

	fentrada = fopen(argv[1], "r");
	if(fentrada == NULL) return 1;

	if(argc == 2) fsalida = stdout;
	else {
		fsalida = fopen(argv[2], "w");
		if(fsalida == NULL) return 1;
	}

	while(fgets(linea, TAMANO + 1, fentrada) != NULL) {
		fprintf(fsalida, "%s", linea);
	}
	fclose(fentrada);
	fclose(fsalida);
	return 0;
}