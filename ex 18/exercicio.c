/*=========================================================================================================
	Linguagem C, o curso definitivo
	AULA CARACTERES
	MÓDULO 3 - AULA 0



==========================================================================================================*/


/*=========================================================================================================


==========================================================================================================*/
/*-------------- Bibliotecas ---------------------- */

#include <stdio.h>
#include <stdlib.h>

/*-------------- Função main ---------------------- */

main()

{
	unsigned degraus, i, j, aux = 1;
			 
	printf("Digite o numero de degraus :");
	scanf("%d", &degraus);
	
	for(i=0; i<degraus;i++)
	{
		for(j=0;j<aux;j++)
		printf("# ");
		
		printf(" \n");
		aux++;
	}
  
  
  system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */

	
}
/*-------------- end main ---------------------- */

//exercicio resolvido aula //

/* 	char done = 0;
	unsigned a, b;
	
	for(a=0;a<4;a++)
	{
		for(b=0;b<14;b++)
			if(b<6 && !done) printf("%2Xh ", b);
			else		 printf("FFh ");
			
		done = 1;
		
	putchar('\n');
		
	} */
	
	/*
	
	  unsigned degraus,                              
           i,j,                                  
           aux=1;                                
  
  printf("Entre com o numero de degraus: ");     
  scanf("%d",&degraus);                          
  
  for(i=0; i<degraus; i++)                       
  {
         
     for(j=0;j<aux;j++)                          
       printf("#");                              
       
     putchar('\n');                              
     aux++;     
	 */                                 
           


