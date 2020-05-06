#include <stdio.h>
#include <stdlib.h>
#define limite 2147483647
int factorial_n_iterativo(int n);

void main(){
	int n;
	printf("\nIngrese el valor de n: \n"); scanf("%i",&n);
	printf("\nEl factorial de %i es : %i\n", n,factorial_n_iterativo(n));
	printf("\nEl factorial de %i es : %i\n", n,factorial_n_recursivo(n));
	
	
}

int factorial_n_iterativo(int n){
	int factorial=n,aux;
	n--;
	while(n>=1){
		aux=factorial;
		factorial=factorial*n;
		if(aux>factorial){
			return 0;
		}
		n--;
	}
		return factorial;	
}

int factorial_n_recursivo(int n){
	if(n==1){
		return 1;	
	}
	else{
		return n*factorial_n_recursivo(n-1);
	}
}
