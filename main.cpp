#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson5
main()
{
	int d,m,y;
	printf("Enter your birthday ");
	scanf("%i",&d);
	printf("Enter month of birthday ");
	scanf("%i",&m);
	printf("Ånter year of birthday ");
	scanf("%i",&y);
	
	// весокосный год/нет
	if (y%4 !=0) 
	{
		printf("You were not born in a leap year;\n ");
	}
	else 
	{
		printf("You were born in a leap year;\n ");
	}
	// Знак зодиака
	if ( (m==1 && d>=21) || (m==2 && d<=19) )
	{
		printf("by the sign of the zodiac you Vodoley;\n ");
	}
	else
	if ( (m==2 && d>=20) || (m==3 && d<=20) )
	{
		printf("by the sign of the zodiac you Ribi;\n ");
	}
	else
	if ( (m==3 && d>=21) || (m==4 && d<=20) )
	{
		printf("by the sign of the zodiac you Oven;\n ");
	}
	else
	if ( (m==4 && d>=21) || (m==5 && d<=20) )
	{
		printf("by the sign of the zodiac you Telec;\n ");
	}
	else
	if ( (m==5 && d>=21) || (m==6 && d<=21) )
	{
		printf("by the sign of the zodiac you Blizneci;\n ");
	}
	else
	if ( (m==6 && d>=22) || (m==7 && d<=22) )
	{
		printf("by the sign of the zodiac you Rak;\n ");
	}
	else
	if ( (m==7 && d>=23) || (m==8 && d<=23) )
	{
		printf("by the sign of the zodiac you Lev;\n ");
	}
	else
	if ( (m==8 && d>=24) || (m==9 && d<=23) )
	{
		printf("by the sign of the zodiac you Deva;\n ");
	}
	else
	if ( (m==9 && d>=24) || (m==10 && d<=22) )
	{
		printf("by the sign of the zodiac you Vesi;\n ");
	}
	else
	if ( (m==10 && d>=23) || (m==11 && d<=22) )
	{
		printf("by the sign of the zodiac you Skorpion;\n");
	}
	else
	if ( (m==11 && d>=23) || (m==12 && d<=21) )
	{
		printf("by the sign of the zodiac you Strelec;\n");
	}
	else
	if ( (m==12 && d>=22) || (m==1 && d<=20) )
	{
		printf("by the sign of the zodiac you Kozerog;\n ");
	}
	// Китайский год
	if (y%12==0)
	{
		printf("according to the Chinese horoscope, you were born in the year Obez'yani.\n ");
	}
	else
	if (y%12==1)
	{
		printf("according to the Chinese horoscope, you were born in the year Petuh.\n ");
	}
	else
	if (y%12==2)
	{
		printf("according to the Chinese horoscope, you were born in the year Sobaka.\n ");
	}
	else
	if (y%12==3)
	{
		printf("according to the Chinese horoscope, you were born in the year Svin'ya.\n ");
	}
	else
	if (y%12==4)
	{
		printf("according to the Chinese horoscope, you were born in the year Krisi.\n ");
	}
	else
	if (y%12==5)
	{
		printf("according to the Chinese horoscope, you were born in the year Bik.\n ");
	}
	else
	if (y%12==6)
	{
		printf("according to the Chinese horoscope, you were born in the year Tigr.\n");
	}
	else
	if (y%12==7)
	{
		printf("according to the Chinese horoscope, you were born in the year Krolik.\n ");
	}
	else
	if (y%12==8)
	{
		printf("according to the Chinese horoscope, you were born in the year Drakon.\n ");
	}
	else
	if (y%12==9)
	{
		printf("according to the Chinese horoscope, you were born in the year Zmeya.\n ");
	}
	else
	if (y%12==10)
	{
		printf("according to the Chinese horoscope, you were born in the year Loshad'.\n ");
	}
	else
	if (y%12==11)
	{
		printf("according to the Chinese horoscope, you were born in the year Ovca.\n ");
	}
}
