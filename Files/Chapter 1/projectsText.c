#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"
#include "mylib.h"

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
}