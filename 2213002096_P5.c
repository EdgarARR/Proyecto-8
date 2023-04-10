#include<stdio.h>
int main(){


int sbase, asis, eval, sfinal;

printf("Introduzca su sueldo base: ");
scanf("%d", &sbase);

printf("\n\nIntroduzca el numero de sus asistencias totales: ");
scanf("%d", &asis);

printf("\n\nIntroduzca su evaluacion 360: ");
scanf("%d", &eval);

if (asis>=230 && eval>=9){
	sfinal=sbase*1.30;
	printf("\n\nObtuvo un 30 porciento de aumento y su salario final es de: %d", sfinal);
}

else if (200<=asis && asis<=229 && eval>=9){
	sfinal=sbase*1.20;
	printf("\n\nObtuvo un 20 porciento de aumento y su salario final es de: %d", sfinal);
}


else if (asis<200 && eval>=9){
	sfinal=sbase*1.10;
	printf("\n\nObtuvo un 10 porciento de aumento y su salario final es de: %d", sfinal);
}




else if (asis>=230 && 7<=eval<=8){
	sfinal=sbase*1.20;
	printf("\n\nObtuvo un 20 porciento de aumento y su salario final es de: %d", sfinal);
}


else if (200<=asis && asis<=229 && 7<=eval<=8){
	sfinal=sbase*1.20;
	printf("\n\nObtuvo un 20 porciento de aumento y su salario final es de: %d", sfinal);
}

else if (asis<200 && 7<=eval<=8){
	sfinal=sbase*1.0;
	printf("\n\nUsted no tuvo ningun aumento y su salario final es de: %d", sfinal);
}




else if (asis>=230 && eval<7){
	sfinal=sbase*1.10;
	printf("\n\nObtuvo un 10 porciento de aumento y su salario final es de: %d", sfinal);
}

else if (200<=asis && asis<=229 && eval<7){
	sfinal=sbase*1.0;
	printf("\n\nUsted no tuvo ningun aumento y su salario final es de: %d", sfinal);
}

else if (asis<200 && eval<7){
	sfinal=sbase*1.0;
	printf("\n\nUsted no tuvo ningun aumento y su salario final es de: %d", sfinal);
}

}
