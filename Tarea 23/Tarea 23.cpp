
#include<stdio.h>



int main (int argc, char *argv[]) {
	int i, n1, n2, multiplicacion, suma, resta, division, promedio;
	char operacion;
	printf("Que quieres hacer? s/r/m/d/p/");
	operacion=getchar();
		
	
		   switch(operacion)
		   {
         case 's':
         case 'S':
	printf("\n Introduzca primer numero (entero): ");
	scanf ("%d", &n1);	
	printf("\n Introduzca segundo numero (entero): ");
	scanf ("%d", &n2);
	suma = n1 + n2;
	printf("Suma = : %d", suma);
	break;
		   case 'r':
		   case 'R':
			   printf("\n Introduzca primer numero (entero): ");
			   scanf ("%d", &n1);	
			   printf("\n Introduzca segundo numero (entero): ");
			   scanf ("%d", &n2);
			   resta = n1 - n2;
			   printf("Resta = : %d", resta);
	break;
		   case 'm':
		   case 'M':
			   printf("\n Introduzca primer numero (entero): ");
			   scanf ("%d", &n1);	
			   printf("\n Introduzca segundo numero (entero): ");
			   scanf ("%d", &n2);
			   multiplicacion = n1 * n2;
			   printf("Multiplicacion = : %d", multiplicacion);
	break;
		   case 'd':
		   case 'D':
			   printf("\n Introduzca primer numero (entero): ");
			   scanf ("%d", &n1);	
			   printf("\n Introduzca segundo numero (entero): ");
			   scanf ("%d", &n2);
			   division = n1 / n2;
			   printf("Division : %d", division);
	break;
		   case 'p':
		   case 'P':
			   printf("\n introduzca primer numero (entero): ");
			   scanf ("%d", &n1);	
			   printf("\n introduzca segundo numero (entero): ");
			   scanf ("%d", &n2);
			   promedio = (n1 + n2) / 2;
			   if (promedio <= 5)
			   {
			   	printf("Estudia mejor");
			   }
				
		       if (promedio == 6)
		       {
		   	       printf("Apenas y pasaste");
		       }
				  
			   if (promedio == 7)
			   {		   
				   printf ("Pudiste haber dado mas");
			   }
			   if (promedio == 8) 
			   {
				   printf ("Estas mejorando");
			   }
				if (promedio == 9) 
			   {
					printf("Muy bien");
			   }
			   if (promedio == 10) 
			   {			
				   printf("Excelente");
			   }
			   printf("\n Promedio = : %d", promedio);
			   
	 
}
}

