#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	int sum, sub;
	printf("input two integers : ");
	scanf("%i %i",&a,&b);
	
	sum = a+b;
	sub = a-b;
	
	printf("+ result is %i\n", sum);
	printf("- result is %i\n", sub);
	printf("* result is %i\n", a*b);
	printf("/ result is %i\n", a/b);
	printf("%% result is %i\n", a%b);
	
	return 0;
	
}
