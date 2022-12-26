#include <stdio.h>
#include "calls.h"

void chapter11() {
	chapter11ChooseText();
	chapter1Text();
}

void chapter11ChooseText() {
	printf("0 - Go Back\n");
	printf("1 - Exercise 1.1\n");
	printf("2 - Exercise 1.2\n");

	chapter11Choose();
}

void chapter11Choose() {
	int x = input();
	switch (x)
	{
	case 0:
		chapter1Text();
		break;
	case 1:
		hello();
		break;
	case 2:
		break;
	default:
		printf("Item not found. Please type again.\n");
		chapter11ChooseText();
		break;
	}
}

void hello() {
	printf("Hello World!");
}