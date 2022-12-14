//My own temperature converter
//Goal, input a measurement and get all conversions e.g. input: 0°C | Output: 32°F & 273,15K
//Generate table with range as input? 0°C to 100°C +1°C. returns 0°C, 1°C, 2°C, 3°C ... 100°C and with the other temps converted.
#include <stdio.h>

char getMeasure();
int getTemp();
int convert();
int checkMeasure();
int error();
int checkTemp();
void wellcome();
int c_f();

int main() {	
	char measure;
	int temp;

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

int getTemp() {
	int temp;
	printf("Type the temperature: \n");
	scanf("%d", &temp);
	//temp = checkTemp();
	return temp;
}

/*int checkTemp() {
	if ()
}*/

int convert(int x, int y) {
	float C, F, K;
	switch (x)
	{
	case 1: //C
		C = y;
		K = y + 273;
		printf(">>>%d", y);
		F = c_f(x, y);
		printf(">>>%d", y);
		printf("%3.1f %6.1f %9.1f", C, F, K);
		break;
	case 2:  //F
		F = y;
		C = c_f(x, y);
		K = c_f(x, y) + 273;
		printf("%3.1f %6.1f %9.1f", C, F, K);
		break;
	case 3:  //K
		K = y;
		C = y - 273;
		F = c_f(x, y) +32;
		printf("%3.1f %6.1f %9.1f", C, F, K);
		break;
	default:
		break;
	}
	return 0;
}

int c_f(int x, int y) { 
	float out;
	if (x == 1) {
		out = (y * (9 / 5)) + 32; //F = c * 9/5 + 32
	}
	if (x == 2 || x == 3) {
		int z = 32;
		if (x == 3) { z = 273; }
		out = (y - z) * (5 / 9); //c = (y - 32) * (5 / 9)
	}
	return out;
}