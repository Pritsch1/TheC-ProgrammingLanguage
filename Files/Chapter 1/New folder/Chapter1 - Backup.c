#include <stdio.h>

int run();
void instruction();
void blankRemover();
void charCounter();
void replacer();
void welcome();

void main() {
	welcome();
	run();
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
}