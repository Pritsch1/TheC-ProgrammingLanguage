#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"
#include "mylib.h"
#include "chapter1.h"
#include "project1.h"

void main() {
	welcome();
	start();
}

//Runs once and describes the program. 
void welcome() {
	printf("Hello there! :)\n");
	printf("This is a show case of the chapterSelection compleated from the book, ");
	printf("\"The C Programming Language\" by ");
	printf("Brian W. Kernighan and Dennis M. Ritchie.\n");
	printf("Along with the book chapterSelection there will also be some ");
	printf("side projects and simple programs to test out language functionalities.\n");
	printf("Navigate trough the index bellow.\n\n\n");
}

//Main index------------------------------------------------//
void index() {
	printf("Index:\n");
	printf("0 - Exit\n");
	printf("1 - Chapter Selection\n");
	printf("2 - Side Projects\n\n");
}

void start() {
	for (int x = 0; x != -1;) {
		index();
		x = inputInt();
		switch (x)
		{
		case 0:
			quit();
			break;
		case 1:
			chapterSelectionText();
			break;
		case 2:
			projectsSelectionText();
			break;
		default:
			printf("Item not found. Please type again.\n");
			break;
		}
	}
}//Main index------------------------------------------------//

//Chapter Selection-----------------------------------------------------//
void chapterSelectionText() {
	printf("Choose a Chapter:\n");
	printf(" 0 - Go Back\n");
	printf(" 1 - Chapter 1. A Tutorial Introduction\n");
	printf(" 2 - Chapter 2. Types, Operators, and Expressions\n");
	printf(" 3 - Chapter 3. Control Flow\n");
	printf(" 4 - Chapter 4. Functions and Program Structure\n");
	printf(" 5 - Chapter 5. Pointers and Arrays\n");
	printf(" 6 - Chapter 6. Structures\n");
	printf(" 7 - Chapter 7. Input and Output\n");
	printf(" 8 - Chapter 8. The UNIX System Interface\n");
	printf(" 9 - Appendix A. Reference Manual\n");
	printf("10 - Appendix B. Standard Library\n");
	printf("11 - Appendix C. Summary of Changes\n");
	printf("12 - Exit\n\n");

	chapterSelection();
}

void chapterSelection() {
	int x = inputInt();
	switch (x)
	{
	case 0:
		start();
		break;
	case 1:
		chapter1Text();
		break;
	case 2:
		start();
		break;
	case 3:	
		start();
		break;
	case 4:
		start();
		break;
	case 5:
		start();
		break;
	case 6:
		start();
		break;
	case 7:
		start();
		break;
	case 8:
		start();
		break;
	case 9:
		start();
		break;
	case 10:
		start();
		break;
	case 11:
		start();
		break;
	case 12:
		break;
	default:
		start();
		break;
	}
}
//Chapter Selection-----------------------------------------------------//

//Projects Selection
void projectsSelectionText() {
	printf(" 0 - Go Back\n");
	printf(" 1 - Temperature Converter\n");
	printf(" 2 - Exit\n");

	projectsSelection();
}

void projectsSelection() {
	int x = inputInt();
	switch (x)
	{
	case 0:
		start();
		break;
	case 1:
		newlines(0);
		tempConverterWellcome();
		mainTempConverter();
		newlines(1);
		projectsSelectionText();
		break;
	case 2:
		exit(0);
		break;
	default:
		printf("Item not found. Please type again.\n");
		projectsSelectionText();
		break;
	}
}
//

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

	chapter1();
}

void chapter1() {
	int x = inputInt();
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
	int x = inputInt();
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
//