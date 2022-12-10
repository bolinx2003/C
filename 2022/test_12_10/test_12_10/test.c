#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

int my_strlen1(const char* str)
{
	int count = 0;
	while (*str)
	{
		++str;
		++count;
	}
	return count;
}

int my_strlen2(const char* str)
{
	if (*str)
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}

int my_strlen3(const char* str)
{
	const char* start = str;
	while (*str)
	{
		++str;
	}
	return (int)(str - start);
}

int main()
{
	printf("%d\n", my_strlen1("abcdef"));
	printf("%d\n", my_strlen2("abcdef"));
	printf("%d\n", my_strlen3("abcdef"));

	return 0;
}