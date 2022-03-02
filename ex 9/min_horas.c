/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{
	
	int min;
	float horas;
	
	printf("Digite um numero inteiro em minutos para serem convertidos em horas: ");
	scanf("%d", &min);
	
	horas = (float)(min/60.0);
	printf("O valor se refere a = %.2fH\n", horas);
	
	printf("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
