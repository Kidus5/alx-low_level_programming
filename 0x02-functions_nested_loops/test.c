#include <stdio.h>

int main(void)
{
	char put[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}

