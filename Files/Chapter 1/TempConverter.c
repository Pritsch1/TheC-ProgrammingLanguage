//My own temperature converter
//Goal, input a measurement and get all conversions e.g. input: 0°C | Output: 32°F & 273,15K
//Generate table with range as input? 0°C to 100°C +1°C. returns 0°C, 1°C, 2°C, 3°C ... 100°C and with the other temps converted.
#include <stdio.h>

char getMeasure();
float getTemp();
float convert();
int checkMeasure();
int checkTemp();
void wellcome();
int calculate();
float result();

int main() {	
	char measure;
	float temp;

	wellcome();
	measure = getMeasure();
	temp = getTemp();
	convert(measure, temp);
	return 0;
}

void wellcome() {
	char degree = 248;
	printf("Temperature converter.\n");
	printf("Choose the temperature measurement input.\n\n");
	printf("Celsius - (%cC): C\n", degree);
	printf("Fahrenheit - (%cF): F\n", degree);
	printf("Kelvin - (K): K\n");
}

char getMeasure() {
	char measure;	
	measure = getchar();
	measure = checkMeasure(measure);
	return measure;
}

int checkMeasure(int x) {
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
		char newx;
		newx = getchar();		
		return newx = checkMeasure(newx);
		break;
	}
	return 0;
}

float getTemp() {
	float temp;
	printf("Type the temperature: \n");
	scanf("%f", &temp);
	//temp = checkTemp();
	return temp;
}

/*int checkTemp() {
	if ()
}*/

float convert(int x, float y) {
	float C, F, K;
	switch (x)
	{
	case 1: //C
		printf("\n--y:%f--\n", y);
		C = y;
		K = calculate(y, -273.15, 1, 0);
		F = calculate(y, 0, 5.0/9, 32);
		printf("\n>>>%3.2f %6.2f %9.2f\n<<<", C, F, K);
		result(C, F, K);
		break;
	case 2:  //F
		F = y;
		C = calculate(y, -32, 5.0/9, 0);
		K = calculate(y, -32, 5.0/9, 273);
		result(C, F, K);
		break;
	case 3:  //K
		K = y;
		C = calculate(y, -273, 1, 0);
		F = calculate(y, -32, 5.0/9, 273);
		result(C, F, K);
		break;
	default:
		break;
	}
	return 0;
}

int calculate(float input, float num, float frct, int num2) {
	float answer;
	printf("\n---I recieved: %f %f %f %d---\n", input, num, frct, num2);
	answer = ((input + num) * (frct)) + num2;
	return answer;
}

float result(float C, float F, float K) {
	printf("%3.2f %6.2f %9.2f", C, F, K);
	return 0.0;
}

/*
(C + 0     )   × 9/5)  + 32     = F
(K - 273.15)   × 9/5   + 32     = F
(K - 273.15)   x 1/1   + 0      = C
(C + 273.15)   x 1/1   + 0      = K
(F - 32    )   × 5/9   + 0      = C
(F - 32    )   × 5/9   + 273.15 = K
*/

/*
float out;
	if (x == 1 || x == 3) {
		int z = 0;
		if (x == 3) { z = -273.15; }
		out = (y + z * (9.0 / 5)) + 32; //F = c * 9/5 + 32
	}
	if (x == 2) {
		out = (y - 32) * (5.0 / 9); //c = (y - 32) * (5 / 9)
	}
	return out;

	
	float C, F, K;
	switch (x)
	{
	case 1: //C
		C = y;
		K = y + 273.15;
		F = calculate(x, y);
		printf("%3.2f %6.2f %9.2f", C, F, K);
		break;
	case 2:  //F
		F = y;
		C = calculate(x, y);
		K = calculate(x, y) + 273.15;
		printf("%3.2 %6.2f %9.2f", C, F, K);
		break;
	case 3:  //K
		K = y;
		C = y - 273.15;
		F = calculate(x, y) + 32;
		printf("%3.2f %6.2f %9.2f", C, F, K);
		break;
	default:
		break;
	}
	return 0;
*/