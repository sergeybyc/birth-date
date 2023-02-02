#include <stdio.h>

main()
{
	int d,m,y;
	printf("Day=");
	scanf("%i",&d);
	printf("Month=");
	scanf("%i",&m);
	printf("Year=");
	scanf("%i",&y);
	if(y%4==0)
	{
		printf("Year is visokosniy\n");
	}
	else
	{
		printf("Year is NOT visokosniy\n");
	}
	
	switch(y%12)
	{
		case 0:
		{
			printf("God obezyani\n");
		break;
		}
		case 1:
		{
			printf("God petuxa\n");
		break;
		}
		case 2:
		{
			printf("God sobaki\n");
		break;
		}
		case 3:
		{
			printf("God svinyi\n");
		}
		break;
		case 4:
		{
			printf("God krisi\n");
		}
		break;
		case 5:
		{
			printf("God byka\n");
		}
		break;
		case 6:
		{
			printf("God tigra\n");
		}
		break;
		case 7:
		{
			printf("God krolika\n");
		}
		break;
		case 8:
		{
			printf("God drakona\n");
		}
		break;
		case 9:
		{
			printf("God zmei\n");
		}
		break;
		case 10:
		{
			printf("God loshadi\n");
		}
		break;
		case 11:
		{
			printf("God kozy\n");
		}
		break;
	}
	if((m == 12 && d > 21)||(m == 1 && d < 20))
	{
		printf("KOZEROG\n");
	}
	if((m == 1 && d > 19)||(m == 2 && d < 19))
	{
		printf("VODOLEY\n");
	}
	if((m == 2 && d > 18)||(m == 3 && d < 21))
	{
		printf("RYBY\n");
	}
	if((m == 3 && d > 20)||(m == 4 && d < 20))
	{
		printf("OVEN\n");
	}
	if((m == 4 && d > 19)||(m == 5 && d < 21))
	{
		printf("TELEC\n");
	}
	if((m == 5 && d > 20)||(m == 6 && d < 21))
	{
		printf("BLIZNECY\n");
	}
	if((m == 6 && d > 20)||(m == 7 && d < 23))
	{
		printf("RAK\n");
	}
	if((m == 7 && d > 22)||(m == 8 && d < 23))
	{
		printf("LEV\n");
	}
	if((m == 8 && d > 22)||(m == 9 && d < 23))
	{
		printf("DEVA\n");
	}
	if((m == 9 && d > 22)||(m == 10 && d < 23))
	{
		printf("VESY\n");
	}
	if((m == 10 && d > 22)||(m == 11 && d < 22))
	{
		printf("SKORPION\n");
	}
	if((m == 11 && d > 21)||(m == 12 && d < 22))
	{
		printf("STRELEC\n");
	}
}
