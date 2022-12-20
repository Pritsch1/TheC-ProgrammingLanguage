#include <stdio.h>

int main(){
	int x = EOF;
	printf("%d", x);

	int c;

	while ((c = getchar()) != EOF){
		printf("%d", c);
		putchar(c);
		c = getchar();
	}
	
}