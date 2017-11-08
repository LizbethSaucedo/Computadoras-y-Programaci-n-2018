#include<stdio.h>

void fncuadrado(int n1,int n2){
int j, i ;

for(j=1;j<=n1;j++){
	for(i=1;i<=n2-1;i++){
		printf("+");
	}printf("+\n");
}
    return;
}
int main()
{
	int n1, n2;
	printf("Dame la altura:");
	scanf("%d",&n1);
	printf("Dame la base:");
	scanf("%d",&n2);
	
fncuadrado(n1, n2);

}

