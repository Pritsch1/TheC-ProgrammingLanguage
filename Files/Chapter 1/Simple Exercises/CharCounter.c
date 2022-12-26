#include <stdio.h>

int main() {
	run();
}

int run() {
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
	return 0;
}