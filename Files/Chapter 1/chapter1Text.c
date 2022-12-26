#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"

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

	chapter1();
}

void chapter1() {
	int x = input();
	switch (x)
	{
	case 0:
		chapterSelectionText();
		break;
	case 1:
		chapter1_1Text();
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
		exit(0);
		break;
	default:
		printf("Item not found. Please type again.\n");
		chapter1();
		break;
	}
}

void chapter1_1Text() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1-1.\n");
	printf("2 - Exercise 1-2.\n");
	printf("3 - Exit\n\n");

	chapter1_1();
}

void chapter1_1() {
	int x = input();
	switch (x)
	{
	case 0:
		chapter1Text();
		break;
	case 1:
		exercise1_1();
		chapter1_1Text();
		break;
	case 2:
		exercise1_2();
		chapter1_1Text();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	}
}