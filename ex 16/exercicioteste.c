#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


main()

{
	
	int v, i;
	
	v = 1;
	
	while (v <= 200)
	
	{ i = 1;
	  
	  printf("----------CORRENTE - VOLTAGEM - RESISTENCIA ---------\n");
	  
	while (i <= 1000)
	{
	printf("%4dA x %4dV = %10dOhms\n", i, v, i * v);
	i++;
	
	}
	
	v++;
	putchar('\n');
	}
	
	

	system("PAUSE");													
	return 0;															
}																		



/*
main()

{
	int tab, num;														
	
	tab = 1;															
	
	while(tab <= 20)													
	
	{
	
	num = 1;															
	printf("-------------TABUADA DO %2d-----------\n", tab);			
	
	
	
	while (num <= 20)													
	
	{
	
	printf("%3d x %3d = %3d\n", num, tab, num * tab);					
	num++;																
	
	} // end first while                                                
	
	tab++;																
	putchar('\n');														
	
	}																	

	system("PAUSE");													
	return 0;															
}																		

*/
