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
	
	int incog, i, j;
	double matriz[10][10], igual[10];
	double iden[10][10], resul[10];
	double piv;
	
	printf("No de incognitas: ");
	scanf("%i", &incog);
	getch();
	system("cls");
	//captura de matriz
	for ( i=0 ; i<=incog-1 ; i++){
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\nintrodice valor de matriz posic (%i,%i): ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//captura de igualacion
	for ( j=0 ; j<=incog-1 ; j++){
			printf("\nintrodice valor de igualacion %i: ", j+1);
			scanf("%d", &igual[j]);
	}
	
	//impresion de matriz
	for ( i=0 ; i<=incog-1 ; i++){
		printf("\n");
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\t%d", matriz[i][j]);
		}
		printf("|\t%d ", igual[i]);
	}
	
	//crear pivote
	iden[0][0] = 5/*(matriz[0][0])/(matriz[0][0])*/;
	iden[0][1] = matriz[0][1]/matriz[0][0];
	iden[0][2] = matriz[0][2]/matriz[0][0];
	resul[0] = igual[0]/matriz[0][0];
	piv = iden[0][0];
	printf("\n%d %d", matriz[0][0], iden[0][0] );
	//ceros en la 1ra fila
	iden[1][0] = matriz[1][0]-matriz[1][0]*piv;
	iden[1][1] = matriz[1][1]-matriz[1][0]*piv;
	iden[1][2] = matriz[1][2]-matriz[1][0]*piv;
	resul[1] = igual[1]-matriz[1][0]*piv;
	
	//ceros en 2da fila
	iden[2][0] = matriz[2][0]-matriz[2][0]*piv;
	iden[2][1] = matriz[2][1]-matriz[2][0]*piv;
	iden[2][2] = matriz[2][2]-matriz[2][0]*piv;
	resul[2] = igual[2]-matriz[2][0]*piv;
	
	printf("\n");
	for ( i=0 ; i<=incog-1 ; i++){
		printf("\n");
		for ( j=0 ; j<=incog-1 ; j++){
			printf("\t%d", iden[i][j]);
		}
		printf("|\t%d ", resul[i]);
	}
}

int main(){
	prueba();
}
