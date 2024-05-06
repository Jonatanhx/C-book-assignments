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
int main() {
	int c, blank, nl, tab;
	
	blank = 1;
	nl = 2;
	tab = 3;
	
	c = 0;
	
	while ((c = getchar()) != EOF) {
		
		if (c == '\n') /* If a character is new line print 2*/ 
			printf("%ld\n", nl);
		else if (c == ' ')
			printf("%ld\n", blank); /* if character is space print 1 */
			else if (c == '\t') /* if character is tab print 3*/
				printf("%d\n", tab);
	}
	return 0;
}