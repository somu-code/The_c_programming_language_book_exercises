#include <stdio.h>
int main()
{
	int c, blanks, tabs, newlines;
	blanks = tabs = newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') ++blanks;
		if (c == '\t') ++tabs;
		if (c == '\n') ++newlines;
	}
	printf("Blanks: %d, Tabs: %d and Newlines: %d\n", blanks, tabs, newlines);
}
