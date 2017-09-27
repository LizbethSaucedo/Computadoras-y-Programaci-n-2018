#include<stdio.h>
//#incluid<studio.h>
int main (){

	int num1;
	int num2;
	int num3;

	printf("dame el primer numero\n");
	scanf("%i" ,&num1);
	printf("dame el segundo numero\n");
	scanf("%i" ,&num2);
	printf("dame el tercer numero\n");

	scanf("%i" ,&num3);
	if (num1>0 && num2>0 && num3>0 && (num1!=num2) && (num2!=num3) && (num1!=num3))	{
		if(num1<num2 && num1<num3){
			printf("%i es el menor\n", num1);
	}
		if(num2<num1 && num2<num3){
			printf("%i es el menor\n", num2);
	}
	   	if(num3<num1 && num3<num2){
			printf("%i es el menor\n", num3);
	}

	
    } else {//fin del if
    printf("los numeros deben de ser mayores a 0 y diferentes entre si\n");
}//fin del programa

   
	} //fin del main
	
