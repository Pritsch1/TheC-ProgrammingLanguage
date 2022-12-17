//My own temperature converter
//Goal, input a measurement and get all conversions e.g. input: 0°C | Output: 32°F & 273,15K
//Generate table with range as input? 0°C to 100°C +1°C. returns 0°C, 1°C, 2°C, 3°C ... 100°C and with the other temps converted.
#include <stdio.h>

char getMeasure();
float getTemp();
float convert(int x, float y);
int checkMeasure(int x);
void wellcome();
int calculate(float input, float num, float frct, float num2);
void result(float C, float F, float K);
void restart();

int main() {	
	char measure;
	float temp;

	wellcome();
	measure = getMeasure();
	temp = getTemp();
	convert(measure, temp);
	restart();
	return 0;
}

void wellcome() {
	char degree = 248;
	printf("Temperature converter.\n");
	printf("Choose the temperature measurement input.\n");
	printf("Celsius - (%cC): C\n", degree);
	printf("Fahrenheit - (%cF): F\n", degree);
	printf("Kelvin - (K): K\n");
}

char getMeasure() {
	char measure;
	scanf("%c", &measure);
	
	//DEBUG
	printf("\n\t\tMY INPUT IS %c ON getMeasure()\n", measure);
	//DEBUG
	
	//getchar();
	return measure = checkMeasure(measure);
}

int checkMeasure(int x) {

	//---DEBUG
	int trash;
	trash = getchar();//getchar() alone should stay!
	printf("\n\t\tMY INPUT IS >>%d<< ON checkMeasure(). trash\n", trash);
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
		printf("\n\t\tMY INPUT IS >>%c<< ON getMeasure() The Error part.\n", newx);
		//---DEBUG
		return newx = checkMeasure(newx);
		break;
	}
	return 0;
}

float getTemp() {
	float temp;

	int trash;//DELETE

	printf("Type the temperature: \n");
	scanf("%f", &temp);
	trash = getchar();//DELETE trash ONLY

	//--DEBUG
	printf("\n\t\tMY INPUT IS >>%f<< ON gettemp() temp and TRASH >>%d<<\n", temp, trash);
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
		result(C, F, K);
		break;
	case 2:  //F
		F = y;
		C = calculate(y, -32, 5.0 / 9, 0);
		K = calculate(y, -32, 5.0 / 9, 273.15);
		result(C, F, K);
		break;
	case 3:  //K
		K = y;
		C = calculate(y, -273.15, 1, 0);
		F = calculate(y, -273.15, 9.0 / 5, 32);
		result(C, F, K);
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

void result(float C, float F, float K) {
	printf("%3.2f %6.2f %9.2f", C, F, K);
}

void restart() {
	char x;

	int trash; //delete

	printf("\nGo again?\n(Y/N)\n");
	scanf("%c", &x);
	trash = getchar();

	//--DEBUG
	printf("\n\t\tMY INPUT IS >>%c<< ON restart() and TRASH >>%d<<\n", x, trash);
	//--DEBUG
	if (x == 'Y' || x == 'y') {
		main();
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