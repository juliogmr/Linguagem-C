/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{
	unsigned short a, b, c, soma, elevado;
	
	printf("Digite um numero menor ou igual a 85: ");
	scanf("%d", &a);
	
	if (a > 85)
	printf("O valor digitado maior que 85, programa finalizado. ");
	
	else
	printf("O valor digitado foi = %d\n", a);
	
	soma = a;
	b = ++a;
	c = --a - 1;
	soma = soma + b + c;
	elevado = soma * soma;
	
	printf("O valor somado um \x82 de: %d\n", b);
	printf("O valor subtraido em 1 \x82 de: %d\n", c);
	printf("A soma de todos os valores envolvidos \x82 de: %d\n", soma);
	printf("O quadrado das somas e de: %d\n", elevado);
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
