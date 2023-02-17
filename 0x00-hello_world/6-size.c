#include <stdio.h>

int main(void)
{
	char c;
	int d;
	long int li;
	long long int lli;
	float f; 

	printf("Size of a char: %lu byte(s)\nSize of a int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (unsigned long)sizeof(c), (unsigned long)sizeof(d), (unsigned long)sizeof(li), (unsigned long)sizeof(lli), (unsigned long)sizeof(f));
	return (0);
}
