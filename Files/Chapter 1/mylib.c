#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"
#include "mylib.h"

int inputInt() {
	int x = 0;
	scanf("%d", &x);
	getchar();
	return x;
}

char inputChar() {
	char x;
	scanf("%c", &x);
	getchar();
	return x;
}

int newlines(int x) {
	if (x == 0) { printf("\n------------Start.------------\n"); }
	if (x == 1) { printf("\n------------End---------------.\n\n"); }
	return 0;
}

int quit() {
	char x = 0;
	printf("\nQuit? (Y/N)\n");
	scanf("%c", &x);
	if (x == 89 || x == 121) { exit(0); }
	return 0;
}