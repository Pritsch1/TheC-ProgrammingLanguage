#include <stdio.h>

int main()
{
	long nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%d\n", nc);
	printf("%ld\n", nc);
	printf("%.0f\n", nc);
}