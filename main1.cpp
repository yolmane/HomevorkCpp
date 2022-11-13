#ioclude<stdio.h>
// ссыль на гит: https://github.com/yolmane/HomevorkCpp/tree/lesson3.5
main()
{
	int i=5;
	int sum=0;
	while(i<15)
	{
		sum=sum+i;
		printf("%i+",i);
		i=i+1;
	}
	sum=sum+i;
	printf("%i=%i",i,sum);
}	
