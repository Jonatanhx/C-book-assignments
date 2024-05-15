#include <stdio.h>
/* copy input to output, use ctrl + z + enter on windows to confirm input */

/*
Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
Exercise 1-7. Write a program to print the value of EOF.
*/
/*
int main()
 {
	int c;
	c = getchar();
	while (c != EOF) {
		printf(" %d\n", c != EOF);
		putchar(c);
		c = getchar();
	}
	printf("%d\n", c != EOF);
	return 0;
 } ;
*/
/* Character Counting */
/*
int main() {
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);

	return 0;
}
*/
/*Line counting*/
/* int main() {
	int c, nl;

	nl = 0;
	while ((c= getchar()) != EOF)
		if (c == '\n');
			++nl;
	printf("%ld\n", nl);
}	*/

/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.
*/
/*
int main() {
	int c, blank, nl, tab;

	blank = 1;
	nl = 2;
	tab = 3;

	c = 0;

	while ((c = getchar()) != EOF) {

		if (c == '\n')
			printf("%ld\n", nl);
		else if (c == ' ')
			printf("%ld\n", blank);
			else if (c == '\t')
				printf("%d\n", tab);
	}
	return 0;
}
*/
/*
#define IN 1
#define OUT 0
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
 */
/*
Exercise 1-11.

Q How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any?

A: Symbols, non-ASCII characters

Exercise 1-12. Write a program that prints its input one word per line.
 */

/* int main()
{
	int c;

	while (c != EOF)
	{
		putchar(c);
		c = getchar();
		if (c == ' ')
		{
			printf("\n");
		}
	}
	printf("", c != EOF);
}
 */

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
	{

		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{

		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
		printf("digits =");
		for (i = 0; i < 10; ++i)
		{
			printf(" %d", ndigit[i]);
		}
		printf(", white space = %d, other = %d\n",
			   nwhite, nother);
	}
}