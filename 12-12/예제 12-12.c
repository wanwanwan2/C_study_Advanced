#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	//printf("������ ���߿� ������ ���� �̸� : ");
	printf("�տ��� 3���� ���ڸ� ���ϸ�? ");
	
	//if (strcmp(str1, str2) > 0)
	//	printf("%s\n", str1);
	//else
	//	printf("%s\n", str2);

	if (strncmp(str1, str2, 3) == 0)
		printf("����.\n");
	else
		printf("�ٸ���.");

	return 0;
}