/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Fun��o main ---------------------- */

main()
	
{
	float voltagem = 0.0, corrente = 0.0, potencia = 0.0, tensao = 0.0; 							// valores de voltagem, corrente, tens�o e pot�ncia //
	int dado, resistencia;																			// valores inteiros do dado e resist�ncia 			//
	
	printf("Entre com um valor de tensao em Volts:\n");												// Valor pedido em Volts da tens�o					 //
	scanf("%f", &voltagem);																			// Valor inteiro inserido em Volts da tens�o.		 //
	printf("Entre com um valor de resistencia em Ohms:\n");											// Valor pedido em Ohms da resist�ncia   	.		 //
	scanf("%d", &resistencia);																		// Valor inteiro inserido em Ohms da resist�ncia. 	//
	
	printf("Se deseja calcular a corrente que circula pelo resistor, digite 1. \n");				// Digitar 1 para calcular o valor da corrente      //
	printf("Se deseja calcular a pot�ncia dissipada no resistor, digite 2. \n");					// Digitar 2 para calcular o valor da pot�ncia      //
	printf("Se deseja calcular o valor da tensao para uma corrente de 100mA, digite 3. \n");		// Digitar 3 para calcular o valor da tens�o        //
	printf("Digite o valor de qual dado desejas calcular: \n");
	scanf("%d", &dado);																				// Digitar 1, 2 ou 3 para calcular o que quer      //
	
	if(dado == 1)																					// Se digitar 1, o programa ir� calcular a corrente //
	{
		corrente = voltagem / resistencia;
		printf("A corrente tem valor de: %.2fA \n", corrente);
	}
	else if(dado == 2)																				// Se digitar 2, o programa ir� calcular a pot�ncia //
	{
		potencia = voltagem * (voltagem / resistencia);
		printf("A potencia dissipada no resistor foi de: %.2fW \n", potencia);
	}
	else if(dado == 3)																				// Se digitar 3, o programa ir� calcular tens�o 	//
	{
		tensao = 0.1 * resistencia;
		printf("A tensao para uma corrente de 100mA foi de: %.2fV \n", tensao);
	}
	else																							// Se digitar qualquer valor diferente de 1,2 ou 3  //
	printf("Valor digitado diferente dos fornecidos, programa encerrando. \n");						// o programa ir� encerrar							//
	
	
	system("PAUSE"); /*-------------- Pausa execu��o ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */
