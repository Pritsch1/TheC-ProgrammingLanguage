#include <stdio.h>

int main()
{
	long nc;
	for (nc = 0; getchar() != EOF; ++nc)
		getchar();
	
	printf("%d\n", nc);
	printf("%ld\n", nc);
	printf("%.0ld\n", nc);
}