#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
	return ((year % 4 == 0) && (year % 100)) || (year % 400 == 0);
}

int main()
{
	for (int year = 100; year <= 200; year++)
	{
		if (is_leap_year(year))
			printf("%d ", year);
	}

	return 0;
}