#include<stdio.h>
#include<string.h>
#include "alumnos.h"
#include "cabecera.h"

int main(int argc, char *argv[]){
	appInfoData("Estructura alumnos", "20/11/2017");
	ALUMNO var1;
	
	var1=nuevoAlumno();
	
	printf("Edad:%d nombre:%s",var1.edad,var1.nombre);
	
	return 0;

}

