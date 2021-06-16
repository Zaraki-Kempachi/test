#include <stdio.h>

long double get_fibonnachi(int);

int clean_stdin() {
	while (getchar() != '\n');
	return 1;
}

int main() 
{
	char c;
	int pnum, k;
	do {
		printf("Fibonacci series ordinal number: ");
	} while
		(((scanf_s("%d%c", &pnum, &c) != 2 || c != '\n') && clean_stdin()));
	k = pnum;
	printf("+-----------+---------------+\n");
	printf("|   nomer   |    znachenie  |\n");
	printf("+-----------+---------------+\n");
	for (pnum; pnum<k+10; pnum++) {
		if (pnum < 0)
			pnum = k = 0;
		printf("| %5d     |    %6lg     |\n", pnum, get_fibonnachi(pnum));
		printf("+-----------+---------------+\n");
	}
}

long double get_fibonnachi(int num) {
	if (num == 0 || num == 1)
		return 1;
	return get_fibonnachi(num - 1) + get_fibonnachi(num - 2); 
}