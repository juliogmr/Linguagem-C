/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{	int idade; 
	float auxilio = 200.00;
	char opt;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Você possui carro? Digite s ou n: ");
	scanf(" %c", &opt);
	
	if(idade >= 18 && idade <= 50)
	auxilio = 500.00;
	
	if(opt == 'S' || opt == 's')
	auxilio = 200.00;
	
	printf("O auxilio sera de R$: %.2f\n", auxilio);
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
