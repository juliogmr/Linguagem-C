/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Fun��o main ---------------------- */

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
	
	system("PAUSE"); /*-------------- Pausa execu��o ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */

/* 	int numero;
	while(1)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
	
		if(numero%2) break;															// O % indica o resto da divis�o, quanto tem um dois do lado, vai verificar se � o restante � par ou impar, se for par, nesse caso, vai dar Tudo Ok //
		printf("Tudo ok\n");
	}
	printf("Erro, o numero \x82 impar\n");	
	
*/
