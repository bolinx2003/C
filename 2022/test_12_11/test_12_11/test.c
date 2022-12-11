#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// 以下函数均使用递归实现

int my_strlen(const char* str)
{
	assert(str);

	if (*str == '\0')
		return 0;

	return 1 + my_strlen(str + 1);
}

void reverse_str(char* str)
{
	assert(str);

	int len = my_strlen(str);
	char* start = str;
	char* end = str + len - 1;

	char tmp = *start;
	*start = *end;
	*end = '\0';

	if (my_strlen(str + 1) >= 2)
		reverse_str(str + 1);

	*end = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_str(arr);
	printf("%s\n", arr);

	return 0;
}