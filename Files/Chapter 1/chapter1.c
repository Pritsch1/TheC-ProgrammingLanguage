#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"
#include "mylib.h"
#include "chapter1.h"

//Chapter 1 Selection
void chapter1Text() {
	printf("Choose The Sub Chapter:\n");
	printf(" 0 - Go Back\n");
	printf(" 1 - 1.1  Getting Started\n");
	printf(" 2 - 1.2  Variables and Arithimetic Expresions\n");
	printf(" 3 - 1.3  The For Statemente\n");
	printf(" 4 - 1.4  Symbolic Constants\n");
	printf(" 5 - 1.5  Character Inpit and Output\n");
	printf(" 6 - 1.6  ...\n");
	printf(" 7 - 1.7  ...\n");
	printf(" 8 - 1.8  ...\n");
	printf(" 9 - 1.9  ...\n");
	printf("10 - 1.10 ...\n");
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
			//chapter1_2();
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
			printf("Item not found. Please type again.\n");
			break;
		}
	}	
}

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
			exercise1_1();
			break;
		case 2:
			exercise1_2();
			break;
		case 3:
			quit();
			break;
		default:
			printf("Item not found. Please type again.\n");
			break;
		}
	}
	
}
//

void exercise1_1() {
	newlines(0);
	printf("Hello, World! :)");
	newlines(1);
}

void exercise1_2() {
	newlines(0);
	printf("Hello, \\yWorld! :)");
	newlines(1);
}

/*void hello() {
	printf("Hello World!!!");
}

void instruction() {
	printf("Choose the exercise to run:\n");
	printf("BlankRemover - 1\n");
	printf("CharCounter  - 2\n");
	printf("Replacer     - 3\n");
	printf("Quit         - 4\n");
}

int run() {
	int choose = 0;

	do {
		instruction();
		choose = 0;
		scanf("%d", &choose);
		getchar();
		switch (choose)
		{
		case 1:
			blankRemover();
			break;
		case 2:
			charCounter();
			break;
		case 3:
			replacer();
			break;
		default:
			break;
		}
	} while (choose != 4);
	return 0;
}

void blankRemover() {
	int input, space;
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
	}
}

void charCounter() {
	unsigned int blanks, tabs, input, activate;
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
	}
}

void replacer() {
	printf("Replacer:");
}*/