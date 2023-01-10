#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
//For some reason getchar() is able to "trash" the enter key input.
//If getchar() is no present on inputInt() and inputChar() the last input will always be an int 10.
//int 10 or New Line char. Funny that is does not get inputed in the current function but the following.
//So! Without getchar(), the current function runs and there is an int 10 as a ghost waiting to get picked up
//on the next input function.

int inputInt() {
	int x = 0;
	scanf("%d", &x);
	getchar();//trashes the enter key
	return x;
}

char inputChar() {
	char x;
	scanf("%c", &x);
	getchar();//trashes the enter key
	return x;
}

int trim(int x) {
	if (x == 0) { printf("\n------------Start.------------\n"); }
	if (x == 1) { printf("\n------------End---------------.\n\n"); }
	return 0;
}

int quit() {
	char x = 0;
	printf("\nQuit? (Y/N)\n");
	x = inputChar();
	if (x == 89 || x == 121) { exit(0); }
	return 0;
}

int restart() {
	char x = 0;
	printf("\nGo again? (Y/N): ");
	x = inputChar();
	if (x == 'Y' || x == 'y') { return 0; }
	return -1;
}

void error404() {
	printf("\nOPS! :(\nItem not found. Please type again.\n");
}