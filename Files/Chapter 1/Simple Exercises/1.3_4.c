//exercise 1-5. from page 14 and define explanation that follows
#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}