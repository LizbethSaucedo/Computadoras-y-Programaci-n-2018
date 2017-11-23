

struct alumnos


{int edad;
 char nombre[60];
 char genero;
 char carrera[25];
 char nCuenta[10];
 
 
};

typedef struct alumnos ALUMNO;
ALUMNO nuevoAlumno (){
    ALUMNO tmp;

	printf("introduce la edad:");
	scanf("%d",&tmp.edad);
	
		printf("introduce el nombre:");
		fflush(stdin);
		gets(tmp.nombre);
		
			printf("introduce el genero:");
	scanf("%c",&tmp.genero);
	
		printf("introduce la carrera:");
		fflush(stdin);
		gets(tmp.carrera);
		
		printf("introduce numero de cuenta:");
		fflush(stdin);
		gets(tmp.nCuenta);
		return tmp;
	}
	void imprimeAlumno(ALUMNO al){
			
			printf("***************\n");
			printf("nombre:%s\n",al.nombre);
			printf("edad:%d\n",al.edad);
			printf("genero:%c\n",al.genero);
			printf("carrera:%s\n",al.carrera);
			printf("numero de cuenta:%s\n",al.nCuenta);
			
		} 
			
	


