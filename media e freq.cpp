
#include<stdio.h>
#include<stdlib.h>

float me, fr;

main()
{
	//1 ler dados
	printf("Informe o valor da media. :");
	scanf("%f", &me);
	
	//2 ler dados
	
	printf("Informe o valor da frequencia. :");
	scanf("%f", &fr);
	
	//3 Resolver a conta
	
	if(me<7)
	{
		if(me<5)
	    {
	    	printf("\nReprovado\n\n");
		}
		else
		{
			if(fr<75)
			{
			   printf("\nReprovado\n\n");	
			}
			else
			{
				printf("\nRecuperacao\n\n");
			}
		}
	}
	else
	{
	   if(fr<75)
	   {
	      printf("\nReprovado\n\n"); 
	   }
	   else
	   {
	   	  printf("\nAprovado\n\n");
	   }
	   
	   system("pause");
	}
}

