#include <stdio.h>
#include <stdlib.h>

main(){
	
	printf("\n####### VAMOS FAZER UMA SUBTRA��O!! #######\n");

	
	int a,b;
	printf("\n\nDigite o primeiro valor:\n");
	scanf("%d", &a);
	printf("\nPRIMEIRO VALOR DIGITADO COM SUCESSO!!!\n");
	printf("\n##########\n");
	
	printf("\nDigite o segundo valor:\n");
    scanf("%d", &b);
    printf("\nSEGUNDO VALOR DIGITADO COM SUCESSO\n");
	
	int c = a - b;
	
	printf("\n\n####### HORA DO RESULTADO!! #######\n\n");

	
	printf("O resultado da sua soma de %d - %d = %d\n\n", a,b,c);
	
	return 0;

	
}
