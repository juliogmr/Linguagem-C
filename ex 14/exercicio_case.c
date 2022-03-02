/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{	
	int i = 0;
	char letra;
	
	printf("Insira a inicial do seu estado civil: ");
	scanf("%c", &letra);
	printf("Insira sua idade: ");
	scanf("%d", &i);

	
	
	switch(letra)
	{
	
		case 's':
		case 'S':
			printf("O individuo tem %d anos e \x82 solteiro.\n", i);
			break;
		case 'd':
		case 'D':
			printf("O individuo tem %d anos e \x82 divorciado.\n", i);
			break;
		case 'v':
		case 'V':
			printf("O individuo tem %d anos e \x82 viuvo.\n", i);
			break;
		case 'C':
		case 'c':
			printf("O individuo tem %d anos e \x82 casado.\n", i);
			break;
		default:
			printf("Letra nao encontrada, opçao invalida.\n", i);
	
	}
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
