#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	((n < 10 && n >= 0) || (n > -10 && n < 0)) && printf("1");
	((n < 100 && n >= 10) || (n > -100 && n < -10)) && printf("2");
	((n < 1000 && n >= 100) || (n > -1000 && n < -100)) && printf("3");
	((n < 10000 && n >= 1000) || (n > -10000 && n < -1000)) && printf("4");
	((n < 100000 && n >= 10000) || (n > -100000 && n < -10000)) && printf("5");
	((n < 1000000 && n >= 100000) || (n > -1000000 && n < -100000)) && printf("6");
	((n < 10000000 && n >= 1000000) || (n > -10000000 && n < -1000000)) && printf("7");
	((n < 100000000 && n >= 10000000) || (n > -100000000 && n < -10000000)) && printf("8");
	((n < 1000000000 && n >= 100000000) || (n > -1000000000 && n < -100000000)) && printf("9");
	((n < 10000000000 && n >= 1000000000) || (n > -10000000000 && n < -1000000000)) && printf("10");
	
	return 0;
}
