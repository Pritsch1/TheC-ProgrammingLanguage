#include <stdio.h>

void run();

int main() {
	run();
}

void run() {
	int input, space;
	input = space = 0;

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
			if (space == 1) { printf(" %c", input); } //abc a  bc
			space = 0;
			break;
		}
	}
}