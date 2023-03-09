#include <stdio.h>
int main()
{
	int c;
	c = getchar();
	printf("%d\n", getchar() != EOF);
	return 0;
}
