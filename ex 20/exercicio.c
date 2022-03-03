/*=====================================================
==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Protótipo da Função----------------*/

void freq(float R, float C, char letra);


/*-------------- Função main ---------------------- */

main()

{	
	float R, C;
	char letra;
	
	printf("Entre com um valor para R: ");
	scanf("%f", &R);
	printf("Entre com um valor para C: ");
	scanf("%f", &C);
	printf("Escolha entre: ");
	printf("'A' para calcular o valor da frequencia de corte: ");
	printf("'B' para calcular a constante de tempo: ");
	scanf("%f", &letra);
	
	while(letra == 'A' && letra == 'B');
	{
	freq(R,C, letra);
	}
	system("PAUSE"); /*-------------- Pausa execucão ----------------------------------------------------- */
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */

/*---------------Desenvolvimento da função-----------*/


void freq(float R, float C, char letra)
{
	
	switch(letra)
	{
	case('A'):
	case('a'):	printf("A frequencia de corte eh de: %.2fHz\n",  1/(2*3.14159*R*C)); break;
	case('b'):
	case('B'):	printf("O valor da constante de tempo eh de: %.2fs\n", R*C); break;
	}
	
	
}



// exercicio feito em aula //

/*

float Ra, Rb, C;

	printf("Entre com um valor para Ra: ");
	scanf("%f", &Ra);
	printf("Entre com um valor para Rb: ");
	scanf("%f", &Rb);
	printf("Entre com um valor para C: ");
	scanf("%f", &C);
	
		freq_555(Ra, Rb, C);
	
*/


