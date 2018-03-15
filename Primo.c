#include<stdio.h>

//Verifica se o número é primo

int ehPrimo(int num);

int main()
{
	
}

int ehPrimo(int num){
	int i, cont=0;
	for(i=1; i<=num; i++){
		if(num % i == 0){
			cont++;
		}
	}
	if(cont == 2){
		return 1;
	}
	return 0;
}
