#include <stdio.h>

int main() {
	char str[100];
	int i;
	
	printf("Enter something: ");
	scanf("%s %d", str, &i);

	printf("\nYou entered %s %d", str, i);

	double x;

	scanf("%lf", &x);

	int jason = 5;
	
	jason = 8;

	float jasonF;
	jasonF = 23.33;

	double jason2 = 55.55555555555e+11;


	return 0;
}