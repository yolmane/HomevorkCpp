#ioclude<stdio.h>
// ссыль на гит: https://github.com/yolmane/HomevorkCpp/tree/lesson3.6
main()
{
	int a;
	while(a!=7)
	{
		scanf("%i",&a);
		if(a>7)
		{
			printf("bolshe 7 \n");
		}
		else 
		{	
			if(a<7)
			{
				printf("men'she 7 \n");
			}
		}
		
		//////////////////////
		
			if(a>10)
		{
			printf("bolshe 10 \n");
		}
		else 
		{	
			if(a<10)
			{
				printf("men'she 10 \n");
			}
		}
		
		//////////////////////
		
		if(a%2!=0)
		{
			printf("ne delitsya na 2 \n");
		}
		else 
		{	
				printf("delitsya na 2 \n");
		}
		
		//////////////////////
		
		if(a%3!=0)
		{
			printf("ne delitsya na 3 \n\n");
		}
		else 
		{	
				printf("delitsya na 3 \n\n");
		}
	}
	printf("u won!!!");
}	
