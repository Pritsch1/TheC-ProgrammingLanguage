//My own temperature converter
//Goal, input a measurement and get all conversions e.g. input: 0°C | Output: 32°F & 273,15K
//Generate table with range as input? 0°C to 100°C +1°C. returns 0°C, 1°C, 2°C, 3°C ... 100°C and with the other temps converted.
#include <stdio.h>
#include <stdlib.h>
#include "BookExercises.h"

void tempConverter() {
	newlines(0);
	char measure;
	float temp;
	
	temp = getTemp();
	wellcome();
	measure = getMeasure();
	convert(measure, temp);
	newlines(1);
	restart();
}

void wellcome() {
	char degree = 248;
	printf("\n\nChoose the temperature measurement input.\n");
	printf("%cC,%cF or K: ", degree, degree);
}

char getMeasure() {
	char measure;
	scanf("%c", &measure);

	//DEBUG
	//printf("\n\t\tMY INPUT IS %c ON getMeasure()\n", measure);
	//DEBUG

	//getchar();
	return measure = checkMeasure(measure);
}

int checkMeasure(int x) {

	//---DEBUG
	int trash;
	trash = getchar();//getchar() alone should stay!
	//printf("\n\t\tMY INPUT IS >>%d<< ON checkMeasure(). trash\n", trash);
	//---DEBUG

	char newx;
	switch (x)
	{
	case 67:
		return 1;  //C
		break;
	case 70:
		return 2;  //F
		break;
	case 75:
		return 3;  //K
		break;
	case 99:
		return 1;
		break;
	case 102:
		return 2;
		break;
	case 107:
		return 3;
		break;
	default:
		printf("Wrong Input.\nPlease type C(Celsius), F(Fahrenheit) or K(Kelvin).\n");
		scanf("%c", &newx);
		//---DEBUG
		//printf("\n\t\tMY INPUT IS >>%c<< ON getMeasure() The Error part.\n", newx);
		//---DEBUG
		return newx = checkMeasure(newx);
		break;
	}
	return 0;
}

float getTemp() {
	float temp;

	int trash;//DELETE
	printf("Temperature converter.");
	printf("\nType the temperature: ");
	scanf("%f", &temp);
	trash = getchar();//DELETE trash ONLY

	//--DEBUG
	//printf("\n\t\tMY INPUT IS >>%f<< ON gettemp() temp and TRASH >>%d<<\n", temp, trash);
	//--DEBUG
	return temp;
}

float convert(int x, float y) {
	float C, F, K;
	switch (x)
	{
	case 1: //C
		C = y;
		K = calculate(y, 273.15, 1, 0);
		F = calculate(y, 0, 9.0 / 5, 32);
		result(C, F, K, y, x);
		break;
	case 2:  //F
		F = y;
		C = calculate(y, -32, 5.0 / 9, 0);
		K = calculate(y, -32, 5.0 / 9, 273.15);
		result(C, F, K, y, x);
		break;
	case 3:  //K
		K = y;
		C = calculate(y, -273.15, 1, 0);
		F = calculate(y, -273.15, 9.0 / 5, 32);
		result(C, F, K, y, x);
		break;
	default:
		break;
	}
	return 0;
}

int calculate(float input, float num, float frct, float num2) {
	float answer;
	answer = ((input + num) * (frct)) + num2;
	return answer;
}

void result(float C, float F, float K, float y, int x) {
	char degree = 248;
	if (x == 1) x = 67;
	if (x == 2) x = 70;
	if (x == 3) x = 75;
	printf("\n\n--------------------");
	printf("\n%.0f%c%c is:\n\n", y, degree, x);
	printf("%4.0f%cC %8.0f%cF %12.0fK\n", C, degree, F, degree, K);
	printf("--------------------");
}

void restart() {
	char x;

	int trash; //delete

	printf("\nGo again? (Y/N): ");
	scanf("%c", &x);
	trash = getchar();

	//--DEBUG
	//printf("\n\t\tMY INPUT IS >>%c<< ON restart() and TRASH >>%d<<\n", x, trash);
	//--DEBUG
	if (x == 'Y' || x == 'y') {
		tempConverter();
	}
}

/*
(C + 0     )   × 9/5)  + 32     = F
(K - 273.15)   × 9/5   + 32     = F
(K - 273.15)   x 1/1   + 0      = C
(C + 273.15)   x 1/1   + 0      = K
(F - 32    )   × 5/9   + 0      = C
(F - 32    )   × 5/9   + 273.15 = K
*/