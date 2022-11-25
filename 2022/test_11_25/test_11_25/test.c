#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "abc@def#ghi";
	char buf[30] = { 0 };
	strcpy(buf, arr);

	char* tmp = NULL;
	const char* sep = "@#";
	for (tmp = strtok(arr, sep); tmp != NULL; tmp = strtok(NULL, sep))
	{
		printf("%s\n", tmp);
	}

	return 0;
}