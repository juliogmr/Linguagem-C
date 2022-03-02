/*=========================================================================================================
	Linguagem C, o curso definitivo
	AULA CARACTERES
	MÓDULO 5 - AULA 3



==========================================================================================================*/


/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{	int a, b, soma;

	a = 0;
	b = 1;
	soma = a + b;
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", soma);
	
	while(soma = a + b <= 1000)
	{
	soma = a + b;
	
	a = b;
	b = soma;
	printf("%d\n", soma); 
	}
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */

/* 	int numero;
	while(1)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
	
		if(numero%2) break;															// O % indica o resto da divisão, quanto tem um dois do lado, vai verificar se é o restante é par ou impar, se for par, nesse caso, vai dar Tudo Ok //
		printf("Tudo ok\n");
	}
	printf("Erro, o numero \x82 impar\n");	
	
*/
