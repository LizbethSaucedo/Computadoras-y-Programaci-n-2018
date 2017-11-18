#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10

int main(int argc, char *argv[]) {
	appInfoData("Ejemplo de punteros y arreglos","15/11/17");
	
	int a;
	a =10;
	int *puntero;
	puntero=&a;
	
	printf("%d\n", *puntero);
	printf("%d\n", puntero);
	printf("%d\n",a);
	printf("%d\n",&a);
	
	
	return 0;
}
