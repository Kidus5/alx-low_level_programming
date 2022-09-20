#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char *one = "Hello world\"\n";
	write(1,one, strlen(one));
	return (1);
}
