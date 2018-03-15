#include<stdio.h>

//Verifica se o número é primo

int ehPrimo(int num);

int main()
{
	int n;
	printf("Informe um numero inteiro:\n");
	scanf("%d", &n);
	if(ehPrimo(n) == 1){
		printf("%d e um numero primo!", n);
	}else{
		printf("%d nao e um numero primo!", n);
	}
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

