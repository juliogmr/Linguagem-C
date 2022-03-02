/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{
	
	int V;
	
	printf("Digite o valor da tensao da bateria em volts: ");
	scanf("%d", &V);
	
	V < 10 ? printf("A tensao nao esta OK, aumentar a voltagem.\n") : printf("A tensao esta OK.\n");
	
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
