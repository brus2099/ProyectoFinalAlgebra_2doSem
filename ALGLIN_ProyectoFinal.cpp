#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void portada(){
	printf("\n\t***Universidad Nacional Autonoma de Mexico***");
	printf("\n\t **Facultad de Estudios Superiores Aragon**");
	printf("\n\t        *Ingenieria en Computacion*\n");
	printf("\nAlumno: Bruno  Cruz Granados ");
	printf("\nCatedratico: Arturo Rodriguez Garcia\n");
	printf("\n\n\t     ***PROYECTO DE RECUPERACION***");
}

void prueba(){
	
	int incog, equal, i, j;
	double matriz[10][10], igual[10];
	double resul[10][10], valor[10];
	
	printf("No de incognitas: ");
	scanf("%i", &incog);
	getch();
	system("cls");
	//captura de matriz
	for ( i=0 ; i<=incog-1 ; i++){
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\nintrodice valor de matriz posic (%i,%i): ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	//captura de igualacion
	for ( j=0 ; j<=incog-1 ; j++){
			printf("\nintrodice valor de igualacion %i: ", j);
			scanf("%i", &igual[j]);
	}
	
	//impresion de matriz
	for ( i=0 ; i<=incog-1 ; i++){
		printf("\n");
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("|\t%i ", igual[i]);
	}
	
	//crear pivote
	resul[0][0] = matriz[0][0]/matriz[0][0];
	resul[0][1] = matriz[0][1]/matriz[0][0];
	resul[0][2] = matriz[0][2]/matriz[0][0];
	valor[0] = igual[0]/matriz[0][0];
	
	//ceros en las demas filas
	resul[1][0] = matriz[1][0]-

	for ( i=0 ; i<=incog-1 ; i++){
		printf("\n");
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\t%i", resul[i][j]);
		}
		printf("|\t%i ", valor[i]);
	}
	
}

int main(){
	prueba();
}
