#include <stdio.h>

char getMeasure();
int getTemp();
int convert();
int checkChar();
int error();

main()
{	
	char measure;
	int temp;
	measure = getMeasure();
	temp = getTemp();
	convert(measure, temp);
	
	//test
	//printf("%c and %d", measure, temp);
}

char getMeasure()
{
	char measure;
	char degree = 248;
	printf("Temperature converter.\n");
	printf("Choose the temperature measurement input.\n");
	printf("Celsius - (%cC): C\n", degree);
	printf("Fahrenheit - (%cF): F\n", degree);
	printf("Kelvin - (K): K\n");
	measure = getchar();
	checkChar(measure);
	return measure;
}

int checkChar(int x)
{
	switch (x)
	{
	case 67:
		break;
	case 70:
		break;
	case 75:
		break;
	case 99:
		break;
	case 102:
		break;
	case 107:
		break;
	default:
		return error();
	}
	return 0;
}

int error()
{
	int yORn;
	printf("Wrong Input! Sry :/.\n\n Restart?(Y/N).");
	yORn = getchar();
	if (yORn == 89 || yORn == 121) 
	{ 
		return getMeasure();
	}
	printf("Goodbye! :)");
	return 0;
}

int getTemp() 
{
	int temp;
	printf("Type the temperature: \n");
	scanf("%d", &temp);
	return temp;
}

int convert(char x, int y)
{
	char measure = x;
	int temp = y;
	printf("%c and %d", measure, temp);
	return 0;
}