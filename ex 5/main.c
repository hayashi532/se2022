#include <stdio.h>
#include <string.h>

int main(void)
{
	size_t len;
	char hello[] = "Hello";

	len = strlen("abc");	
	printf("abc:%d \n", len);

	len = strlen(hello);
	printf("Hello:%d \n", len);

	return 0;
}