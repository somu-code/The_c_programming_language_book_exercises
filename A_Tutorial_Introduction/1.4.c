#include <stdio.h>
int main()
{
	int celsius, fahr, lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("%3s%11s\n", "C", "F");
	celsius = lower;
	while (celsius <= upper) {
		fahr = 1.8 * celsius + 32;
		printf("%3d\t%6d\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
