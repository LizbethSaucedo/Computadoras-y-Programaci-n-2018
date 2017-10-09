
#include<stdio.h>

main()
{
	int i;

	printf("introduce un numerodel uno al 7 para saber que dia es:");
	scanf("%d", &i);
		switch(i){
		
    case 1:
    	printf("lunes\n");
    	break;
    case2:	
        printf("martes\n");
		break;
    case 3:
	    printf("miercoles\n");
		break;
    case 4:
	     printf("jueves\n");
		 break;
	case 5:
	    printf("viernes\n");
		break;
	case 6:   
	    printf("sabado\n");
	    break;
	case 7:
		printf("domingo\n");
		break;
	
}
}
