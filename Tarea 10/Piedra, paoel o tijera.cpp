
#include <stdio.h> 
#include <conio.h> 
char *cad[4]={"","Piedra", "Papel", "Tijera"}; 
int main() 
{ int sel, sel2; 
printf("**********************\n" 
"MENU DE OPCIONES \n" 
"(1) Piedra \n" 
"(2) Papel \n" 
"(3) Tijera \n" 
"***********************"); 
printf("\n\nJugador 1:	"); 
do{sel= getch();} 
while(sel!='1' && sel!='2' && sel!='3'); 
sel-=48; printf("%s", cad[sel]); 
printf("\n\nJugador 2:	"); do{sel2= getch();} 
while(sel2!='1' && sel2!='2' && sel2!='3'); 
sel2-=48; printf("%s", cad[sel2]); 
printf("\n\n"); 
if(sel==sel2) printf("EMPATE..."); 
else if(sel==sel2-2 || sel2==sel-2) 
{if(sel==1)printf("Gana Jugador 1 porque es piedra"); 
else printf("Gana Jugador 2 porque es piedra"); } 
else if(sel==sel2+1 || sel2==sel+1) 
{ if(sel==2) {if(sel2!=3)printf("Gana Jugador 1 porque es papel"); 
else printf("Gana Jugador 2 porque es tijera"); } 
else if(sel==3) printf("Gana Jugador 1 porque es tijera"); 
else if(sel2==2) printf("Gana Jugador 2 porque es papel"); 
} 
 
}    
