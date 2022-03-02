/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{
	int var1 = 0,
		var2 = 0, 
		res1 = 0,
		res2 = 0,
		res3 = 0;
	
	printf("Digite dois números inteiros: ");
	scanf("%d%d", &var1, &var2);
	res1 = var1 + var2;
	res2 = var1 - var2;
	res3 = var1 * var2;
	printf("O caractere digitado foi: %d\n", res1);
	printf("O caractere digitado foi: %d\n", res2);
	printf("O caractere digitado foi: %d\n", res3);
	
	printf("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
