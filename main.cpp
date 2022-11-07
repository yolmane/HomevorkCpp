#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson3
main()
{
	int login,password;
	printf("login:");
	scanf("%i",&login);
	printf("password:");
	scanf("%i",&password);
	if(((login==8977411)&&(password==1234))||((login==8916411)&&(password==3214))||(login==8999411)&&(password==2134))
	{
		printf("OK");
	}
	else
	{
		printf("Error");	
	}	
}
