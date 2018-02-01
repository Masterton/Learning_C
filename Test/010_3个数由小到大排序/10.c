#include <stdio.h>

int main()
{
	int a,b,c,t;
	printf("Please input a,b,c:\n");
	scanf("%d %d %d11", &a, &b, &c);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	printf("The order of the number id:\n");
	printf("%d,%d,%d", a, b, c);
}