#include <stdio.h>
#include "calls.h"

void main() {
	welcome();
	start();
}

int input() {
	int x = 0;
	scanf("%d", &x);
	getchar();
	return x;
}

//Runs once
void welcome() {
	printf("\nHello there! :)\n");
	printf("This is a show case of the chapterSelection compleated from the book, ");
	printf("\"The C Programming Language\"\n");
	printf("Brian W. Kernighan and Dennis M. Ritchie.\n");
	printf("Along with the book chapterSelection there will also be some side projects and simple programs to test out language functionalities.\n");
	printf("Navigate trough the index bellow.\n\n\n");
}

void start() {
	printf("Index:\n");
	printf("1 - Chapter Selection\n");
	printf("2 - Side Projects\n");
	
	index();
}

void index() {
	int x = input();
	if (x == 1) { chapterSelectionText(); }
	else if (x == 2) { projectsText(); }
	else {
		printf("Item not found. Please type again.\n");
		start();
	}
}

void chapterSelectionText() {
	printf("Choose a Chapter:\n");
	printf("0 - Go Back\n");
	printf("1 - Chapter 1\n");
	printf("2 - Chapter 2\n");

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
		break;
	default:
		break;
	}
}

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
		chapter11();
		break;
	case 2:
		//chapter12();
		break;
	case 3:
		//chapter13();
		break;
	case 4:
		//chapter14();
		break;
	default:
		break;
	}
}

void projectsText() {

}