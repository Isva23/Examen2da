#include<stdio.h>
#include <stdlib.h>
//Funcion de intercambio
void swap(int *x, int *y){
	int key = *x;
	*x = *y;
	*y = key;
}

void examen(int A[], int n){
	int min;
	for (int i = 0;i < n;i++){
		min = i;
		int indexMin=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[min])
				min = j;
		}
		if (min != i)
			swap(&A[min], &A[i]); 
	}
}
//Imprimir los numeros en pantalla
void pantalla(int A[], int n){
	for(int i = 0; i < n-1; i++)
		printf("%d, ", A[i]);
        printf("%d", A[n-1]);
        printf("\n");
}

int main(){
	int n=0;
	printf("Ingrese el numero de datos a ordenar:");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Ingrese los valores a ordenar:");
		scanf("%d",&A[i]);
	}
    printf("Salida sin ordenar:");
	pantalla(A, n);
	examen(A, n);
    printf("Salida ordenada:");
	pantalla(A, n);
}
