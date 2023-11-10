#include <stdio.h>

int main(void)
{
	char animal1[5][10] = {
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'}
	};

	char animal2[][10] = { "dog", "tiger"};
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 2; i++)
	{
		printf("%s ", animal2[i]);
	}

	return 0;
}