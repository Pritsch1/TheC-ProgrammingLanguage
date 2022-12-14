//Copy and Paste from the book pg.12
#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step, symbol;
	
	lower = 0;
	upper = 300;
	step = 20;
	symbol = 248;

	printf(" %cC |  %cF\n", symbol, symbol);
	printf("----------\n");

	fahr = lower;
	while (fahr <= upper)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}