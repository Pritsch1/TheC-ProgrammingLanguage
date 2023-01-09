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
			chapterSelection();
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
}

void chapterSelection() {
	int x;
	for (x = 0; x != -1;) {
		chapterSelectionText();
		x = inputInt();
		switch (x)
		{
		case 0:
			x = -1;
			break;
		case 1:
			chapter1();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			quit();
			break;
		default:
			printf("Item not found. Please type again.\n");
			break;
		}
	}	
}//Chapter Selection-----------------------------------------------------//

//Projects Selection----------------------------------------------------//
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
}//Projects Selection----------------------------------------------------//