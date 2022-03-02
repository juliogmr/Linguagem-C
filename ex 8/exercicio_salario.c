/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{

/*-------------- ENTRADAS DE DADOS ---------------------- */
	float salario,
		  vendas,
		  total;
	printf("Indique o salario do vendedor: ");
	scanf("%f", &salario);
	printf("Indique o valor das vendas: ");
	scanf("%f", &vendas);
	
	if(vendas>10000.00)
	{
	total = salario*1.10;
	}
	if(vendas>20000.00)
	{
	total = salario*1.15;
	}
	if(vendas>=30000.00)
	{
	total = salario*1.25;
	}
	if(vendas<=10000)
	{
	total = salario*1;
	}
	printf("O salario total do vendedor sera de: RS$ %.2f \n", total);

	
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
	
	
	system("PAUSE"); /*-------------- Pausa execução ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
