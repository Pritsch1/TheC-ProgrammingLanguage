#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"
//
void main() {
	welcome();
	start();
}

int input() { //Replace with fgets()!!!!!!!!!!!!!!!!
	int x = 0;
	scanf("%d", &x);
	getchar();
	return x;
}

int newlines(int x) {
	if (x == 0) { printf("\n------Start.\n"); }
	if (x == 1) { printf("\n------End.\n\n"); }
	return 0;
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
void start() {												//
	printf("Index:\n");										//
	printf("0 - Exit\n");
	printf("1 - Chapter Selection\n");
	printf("2 - Side Projects\n\n");	
	index();
}

void index() {
	int x = input();
	switch (x)
	{
	case 0:
		exit(0);
		break;
	case 1:
		chapterSelectionText();
		break;
	case 2:
		projectsSelectionText();
		break;
	default:
		printf("Item not found. Please type again.\n");
		index();
		break;
	}														//
}															//
//Main index------------------------------------------------//

//Chapter Selection-----------------------------------------------------//
void chapterSelectionText() {											//
	printf("Choose a Chapter:\n");										//
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
	int x = input();
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
	}																	//
}																		//
//Chapter Selection-----------------------------------------------------//