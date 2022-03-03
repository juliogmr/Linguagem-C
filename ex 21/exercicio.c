/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Protótipo----------------*/

void a();
void b();
/*-------------- Função main ---------------------- */



main()

{
	unsigned numero;
	

	
	while(1)
	{
		
	printf("Digite um numero:" );
	scanf("%d", &numero);
	
	if(numero ==3) a();
	if(numero ==7) b();
	if(numero ==0) break;
	}
	
	system("PAUSE"); 
	return 0;	     /*-------------- retorna 0, se main for executada corretamente ---------------------- */
	
}
/*-------------- end main ---------------------- */

/*---------------Desenvolvimento-----------*/

void a()
{

	printf("++++++++++++++++++\n");
	printf("|                |\n");
	printf("| N U M E R O 3  |\n");
	printf("|                |\n");
	printf("++++++++++++++++++\n");
}

void b()
{
	printf("+++++++++++++++++\n");
	printf("|                |\n");
	printf("| N U M E R O 7  |\n");
	printf("|                |\n");
	printf("++++++++++++++++++\n");
}
