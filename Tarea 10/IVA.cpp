#include<stdio.h>
main()
{
	int main();
	float precio, iva, total;
	printf("inserte un numero\n\n");
	printf("\n Conversion de IVA");
	scanf("%f", &precio);
	printf("\n");
	
	
	iva=precio*.14;
	
	printf("el valor de IVA del productoes es: %f", iva);
	printf("\n\n");

	total=precio+iva;
	
	
	printf("el valor del producto con el IVA incluido es de %f", total);
	printf("\n");
	
	return 0;
	
}
