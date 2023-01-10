#include <stdio.h>
#include "mylib.h"
#include "chapter1.h"

//Chapter 1 Selection-----------------------------------------------//
void chapter1Text() {
	printf("Choose The Sub Chapter:\n");
	printf(" 0 - Go Back\n");
	printf(" 1 - 1.1  Getting Started\n");
	printf(" 2 - 1.2  Variables and Arithimetic Expresions\n");
	printf(" 3 - 1.3  The For Statemente\n");
	printf(" 4 - 1.4  Symbolic Constants\n");
	printf(" 5 - 1.5  Character Input and Output\n");
	printf(" 6 - 1.6  Arrays\n");
	printf(" 7 - 1.7  Functions\n");
	printf(" 8 - 1.8  Arguments - Call by Value\n");
	printf(" 9 - 1.9  Character Arrays\n");
	printf("10 - 1.10 External Variables and Scope\n");
	printf("11 - Exit\n\n");
}

void chapter1() {
	int x;
	for (x = 0; x != -1;) {
		chapter1Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			chapter1_1();
			break;
		case 2:
			chapter1_2();
			break;
		case 3:
			//chapter1_3();
			break;
		case 4:
			//chapter1_4();
			break;
		case 5:
			//chapter1_5();
			break;
		case 6:
			//chapter1_6();
			break;
		case 7:
			//chapter1_7();
			break;
		case 8:
			//chapter1_8();
			break;
		case 9:
			//chapter1_9();
			break;
		case 10:
			//chapter1_10();
			break;
		case 11:
			quit();
			break;
		default:
			error404();
			break;
		}
	}	
}//Chapter 1 Selection-----------------------------------------------//

//Chapter 1.1 Exercises-----------------------------------------------//
void chapter1_1Text() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1-1.\n");
	printf("2 - Exercise 1-2.\n");
	printf("3 - Exit\n\n");
}

void chapter1_1() {
	int x;
	for (x = 0; x != -1;) {
		chapter1_1Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			exercise1_1();
			trim(1);
			break;
		case 2:
			trim(0);
			exercise1_2();
			trim(1);
			break;
		case 3:
			quit();
			break;
		default:
			error404();
			break;
		}
	}
	
}

void exercise1_1() {
	printf("Hello, World! :)");
}

void exercise1_2() {
	printf("Hello, \\yWorld! :)");
}//Chapter 1.1 Exercises-----------------------------------------------//

//Chapter 1.2 Exercises-----------------------------------------------//
void chapter1_2Text() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1-3.\n");
	printf("2 - Exercise 1-4.\n");
	printf("3 - Exit\n\n");
}

void chapter1_2() {
	int x;
	for (x = 0; x != -1;) {
		chapter1_2Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			exercise1_3();
			trim(1);
			break;
		case 2:
			trim(0);
			exercise1_4();
			trim(1);
			break;
		case 3:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

void exercise1_3() {//copyNpaste from pg 12. 
	float fahr, celcius;
	int lower, upper, step, symbol;

	lower = 0;
	upper = 300;
	step = 20;
	symbol = 248;

	printf(" %cF |  %cC\n", symbol, symbol);//Modification required
	printf("----------\n");//Modification required

	fahr = lower;
	while (fahr <= upper)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}

void exercise1_4() {
	float fahr, celcius;
	int lower, upper, step, symbol;

	lower = 0;
	upper = 300;
	step = 20;
	symbol = 248;

	printf(" %cC |  %cF\n", symbol, symbol);//Modification required
	printf("----------\n");//Modification required

	celcius = lower;
	while (celcius <= upper)//F = (C + 0     )   × 9/5)  + 32
	{
		fahr = ((9.0 / 5.0) * celcius) + 32;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}

}//Chapter 1.2 Exercises-----------------------------------------------//