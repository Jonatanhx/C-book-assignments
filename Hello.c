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
 #include <stdio.h>

int main() {
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
	
	return 0;
}	
