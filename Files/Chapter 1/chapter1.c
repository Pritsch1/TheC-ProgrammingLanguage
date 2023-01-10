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
	printf(" 4 - 1.4  Symbolic Constants(Same as 1.3)\n");
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
			chapter1_3();
			break;
		case 4:
			chapter1_3();//mixed in with 1.3
			break;
		case 5:
			chapter1_5();
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

	printf(" %cF |  %cC\n", symbol, symbol);//exercise requirement
	printf("----------\n");//exercise requirement

	fahr = lower;
	while (fahr <= upper)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}

void exercise1_4() {//just inverted from F > C to C > F
	float fahr, celcius;
	int lower, upper, step, symbol;

	lower = 0;
	upper = 300;
	step = 20;
	symbol = 248;

	printf(" %cC |  %cF\n", symbol, symbol);
	printf("----------\n");

	celcius = lower;
	while (celcius <= upper)
	{
		fahr = ((9.0 / 5.0) * celcius) + 32;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}

}//Chapter 1.2 Exercises-----------------------------------------------//

//Chapter 1.3(4) Exercises-----------------------------------------------//
void chapter1_3Text() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1-5.\n");
	printf("2 - Exit\n\n");
}

void chapter1_3() {
	int x;
	for (x = 0; x != -1;) {
		chapter1_3Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			exercise1_5();
			trim(1);
			break;
		case 2:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

void exercise1_5() {
//exercise 1-5. from page 14 and #define explanation that follows(1.4)
#define UPPER 300
#define LOWER 0
#define STEP 20
	int fahr;
	printf(" %cF |  %cC\n", 248, 248);
	printf("----------\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}//Chapter 1.3(4) Exercises-----------------------------------------------//

//Chapter 1.5 Exercises-----------------------------------------------//
void chapter1_5Text() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.\n");
	printf("2 - Exercise 1-7: Write a program to print the value of EOF.\n");
	printf("3 - Exercise 1-8: Write a program that counts blanks, tabs and newlines.\n");
	printf("4 - Exercise 1-9: Write a program to copy its input to its output, replacing each string ");
		printf("of one or more blanks by a single blank.\n");
	printf("5 - Exercise 1-10: Write a program to copy its input to its output, replacing each tab by ");
		printf("\\t, each backspace by \\b, and each backslash by\\\\. this makes tabs and backspaces ");
		printf("visible in an unambiguous way.\n");
	printf("6 - Exit\n\n");
}

void chapter1_5() {
	int x;
	for (x = 0; x != -1;) {
		chapter1_5Text();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			trim(0);
			exercise1_6();
			trim(1);
			break;
		case 2:
			trim(0);
			exercise1_7();
			trim(1);
			break;
		case 3:
			trim(0);
			exercise1_8();
			trim(1);
			break;
		case 4:
			trim(0);
			exercise1_9();
			trim(1);
			break;
		case 5:
			trim(0);
			exercise1_10();
			trim(1);
			break;
		case 6:
			quit();
			break;
		default:
			error404();
			break;
		}
	}

}

void exercise1_6() {//FIX!
	/*int c;
	while ((c = getchar()) != EOF) {
		printf("%d", c);
		putchar(c);
		c = getchar();
	}*/
}

void exercise1_7() {
	int x = EOF;
	printf("EOF is: %d", x);
}

void exercise1_8() {//FIX
	/*unsigned int blanks, tabs, input, activate;
	blanks = tabs = input = activate = 0;
	int newlines = -1;

	printf("\n\nDue to command prompt stupidity, NEWLINES can only be counted SEPARATELY and individually.\n");
	printf("Press Enter To Start.\n");

	while ((input = getchar()) != EOF) {
		//input = getchar();
		switch (input) {
		case 32://blanks
			blanks++;
			activate = 1;
			break;
		case 9://tabs
			tabs++;
			activate = 1;
			break;
		case 10://newlines
			if (activate == 0) { newlines++; }
			activate = 0;
			printf("\nBlanks are: %d\nTabs are: %d\nNewlines are: %d\n", blanks, tabs, newlines);
			break;
		default:
			break;

		}
	}*/
}

void exercise1_9() {//FIX
	/*int input, space;
	input = space = 0;

	printf("Blank Remover:");
	while ((input = getchar()) != EOF) {
		switch (input)
		{
		case 32:
			space = 1;
			break;
		case 9:
			space = 1;
			break;
		case 10:
			printf("\n");
			break;
		default:
			if (space == 0) { printf("%c", input); }
			if (space == 1) { printf(" %c", input); }
			space = 0;
			break;
		}
	}*/
}

void exercise1_10() {

}//Chapter 1.5 Exercises-----------------------------------------------//


//Chapter1 - Backup.c file
/*
//1.5.3.c-----------------------------------------------------------------
#include <stdio.h>

int main() {
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}

//1.5.2.c-----------------------------------------------------------------
#include <stdio.h>

int main()
{
	long nc;
	for (nc = 0; getchar() != EOF; ++nc)
		getchar();

	printf("%d\n", nc);
	printf("%ld\n", nc);
	printf("%.0ld\n", nc);
}
*/