#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

typedef struct my_struct2
{
	int* pi;
	char str[20];
}S2;

typedef struct my_struct1
{
	int i;
	double d;
	char c;
	S2 s;
}S1;

int main()
{
	S1 s;
	s.i = 100;
	s.d = 3.14;
	s.c = 'w';
	s.s.pi = &(s.i);
	strcpy(s.s.str, "abc");

	printf("%d %lf %c\n", s.i, s.d, s.c);
	printf("%d %s\n", *(s.s.pi), s.s.str);

	return 0;
}