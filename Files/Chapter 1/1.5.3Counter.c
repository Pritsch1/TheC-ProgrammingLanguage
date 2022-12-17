#include <stdio.h>

int main() {
	run();
}

int run() {
	unsigned int blanks = 0;
	unsigned int tabs = 0;
	int newlines = -1;
	unsigned int input = 0;
	unsigned int activate = 0;

	printf("\n\nDue to command prompt stupidity, NEWLINES can only be \ncounted SEPARATELY and individually.\n");
	printf("Press Enter To Start.\n");	

	while (input != 'q') {
		input = getchar();
		switch (input) {
		case 32://blancks
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
			break;
		default:
			break;

		}
		printf("\nBlanks are: %d\nTabs are: %d\nNewlines are: %d\n", blanks, tabs, newlines);
	}
	return 0;
}