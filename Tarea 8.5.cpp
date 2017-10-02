#include<stdio.h>

int main()
{
int j=1, num, contador;

printf("La medida del cuadrado es (Del 1 al 20) ");
scanf("%d", &num);

if(num<=20 & num>=1){
while (j<=contador){
contador=num*num;
if(j< num){
printf("*");
}
else{
if(j%num==0){
printf("*\n");
}
else{
if(j%num==1){
printf("*");
}
else{
if(j>=((num-1)*num)){
printf("*");
}
else{
if(j%num!=0){
printf(" ");
}
} 
} 
}
} 
j++;
} 
}
else
printf("leer bien?");
return 0;
}
