#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "Best School";
	char *ptr;
	int i;

	ptr = malloc(11);

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	printf("%s\n", ptr);
	printf("%lu\n", sizeof(*str));
	printf("%lu\n", sizeof("Best School"));

	return (0);
}
