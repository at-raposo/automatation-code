#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "Portuguese");

system("color 78");

int num, cont=0; //iniciarei com a tabuada o 0

while(cont<=10){ //enquanto a a condi��o verdadeira, fa�a
	num = 0; //atrinui o valor 0 a variavel num
	
	while (num<=10){ //enquanto a a condi��o verdadeira, fa�a
	

	printf("\n %d X %d = %d \n", cont,num,cont*num);
	num ++;
}
	printf("\n");
	cont ++;
}
	
	return 0;	
	
	
	
	
	
}
