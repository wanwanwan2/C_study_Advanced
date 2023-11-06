#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);
	//str[5] = '\0'; apple까지 나오게 하는 경우
	printf("%s\n", str);

	return 0;
}