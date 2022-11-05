#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>

//size_t my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//
//	// 找到\0
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	// 找目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	// 拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* cur = str1;
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//
//		cur++;
//	}
//
//	return NULL;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		// 左->右
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		// 右->左
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return 1;
//	//}
//	//int* p = (int*)calloc(10, sizeof(int));
//	//if (p == NULL)
//	//{
//	//	perror("calloc");
//	//}
//	//
//	//realloc(p, 80);
//	//
//	//
//	//free(p);
//	//p = NULL;
//
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[] = { 1,2,3,4,0x11223305 };
//	//int ret = memcmp(arr1, arr2, 18);
//	//printf("%d\n", ret);
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memset(arr, 0, 20);
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr + 2, arr, 20);
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1, sizeof(arr2));
//	//int i = 0;
//	//for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	//{
//	//	printf("%d ", arr2[i]);
//	//}
//
//	//putchar(toupper('b'));
//
//	//if (isupper('C'))
//	//{
//	//	printf("upper\n");
//	//}
//
//	//int* p = (int*)malloc(LLONG_MAX);
//	//if (p == NULL)
//	//{
//	//	//printf("%s\n", strerror(errno));
//	//	perror("malloc");
//	//	return 1;
//	//}
//	//
//
//	//printf("%s\n", strerror(2));
//
//	//char arr1[] = "abcdefghhhhhhijkl";
//	//char arr2[] = "hhhijxyz";
//	//char* ret = my_strstr(arr1, arr2);
//	//if (ret == NULL)
//	//{
//	//	printf("找不到子串\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//	//char arr[] = "abc@def.ghi*jkl.mnopqrst";
//	//char buf[50] = { 0 };
//	//strcpy(buf, arr);
//	//char* tmp = NULL;
//	//for (tmp = strtok(buf, "@.*"); tmp != NULL; tmp = strtok(NULL, "@.*"))
//	//{
//	//	printf("%s\n", tmp);
//	//}
//
//	//int ret = strncmp("abcdefg", "abcq", 4);
//	//printf("%d\n", ret);
//
//	//char arr1[30] = "abc\0XXXXXXXXXXXXXXXXX";
//	//char arr2[] = "def";
//	//strncat(arr1, arr2, 5);
//
//	//char arr1[30] = "XXXXXXXXXXXXXXXXXXXXX";
//	//char arr2[] = "abc";
//	//strncpy(arr1, arr2, 5);
//
//	//int ret = my_strcmp("abcdef", "abq");
//	//if (ret > 0)
//	//{
//	//	printf(">\n");
//	//}
//	//else if (ret < 0)
//	//{
//	//	printf("<\n");
//	//}
//	//else
//	//{
//	//	printf("==\n");
//	//}
//
//	//char arr[30] = "abc";
//	//printf("%s\n", strcat(arr, "def"));
//	//my_strcat(arr, "def");
//	//printf("%s\n", arr);
//
//	//char arr[30] = { 0 };
//	//printf("%s\n", my_strcpy(arr, "abcdef"));
//	//my_strcpy(arr, "abcdef");
//	//printf("%s\n", arr);
//
//	//printf("%d\n", my_strlen("abc"));
//
//	return 0;
//}

//struct S
//{
//	int i;
//	int arr[0]; // 柔性数组成员
//};
//
//struct S
//{
//	int i;
//	int arr[]; // 柔性数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	// 使用
//	p->i = 100;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p->arr[i]);
//	//}
//
//	// 扩容
//	struct S* tmp = (struct S*)realloc(p, sizeof(struct S) + 80);
//	if (tmp == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		p = tmp;
//	}
//
//	// 使用
//	for (i = 10; i < 20; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", i);
//	}
//
//	// 释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 柔性数组的替代方案
//struct S
//{
//	int num;
//	int* arr;
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	p->arr = (int*)malloc(40);
//	if (p->arr == NULL)
//	{
//		perror("malloc");
//		free(p);
//		p = NULL;
//		return 1;
//	}
//
//	// 使用
//	// ...
//
//	// 扩容
//	int* tmp = (int*)realloc(p->arr, 80);
//	if (tmp == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		p->arr = tmp;
//	}
//
//	// 释放
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void find_single_dog(int arr[], int sz)
//{
//	// 全部异或到一起
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	// 找出异或出来的数的二进制位中的1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	// 分组，把第pos位为1或者为0的分为一组，异或到一起
//	int single1 = 0;
//	int single2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			single1 ^= arr[i];
//		}
//	}
//	single2 = ret ^ single1;
//	printf("%d %d\n", single1, single2);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	find_single_dog(arr, sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	// ...
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	//fgetc(pf);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//		//putchar(ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//void test1()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("test1::fopen");
//		return;
//	}
//
//	// 写入A~Z
//	char ch = 0;
//	for (ch = 'A'; ch <= 'Z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//}
//
//void test2()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("test2::fopen");
//		return;
//	}
//
//	int ch = 0;
//	while (~(ch = fgetc(pf)))
//	{
//		fputc(ch, stdout);
//	}
//
//	fclose(pf);
//	pf = NULL;
//}
//
//int main()
//{
//	// 写文件
//	test1();
//
//	// 读文件
//	test2();
//
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}

//void test_putc()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("test_putc::fopen");
//		return;
//	}
//
//	// 写文件
//	// 写入a b c ... z
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//void test_getc()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("test_getc::fopen");
//		return;
//	}
//
//	// 读文件
//	int ch = 0;
//	while (~(ch = fgetc(pf)))
//	{
//		fputc(ch, stdout);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//void test_puts()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("test_puts::fopen");
//		return;
//	}
//
//	// 写文件
//	fputs("abcdefg\n", pf);
//	fputs("ABCDEFG\n", pf);
//	fputs("1234567890\n", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//void test_gets()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("test_gets::fopen");
//		return;
//	}
//
//	// 读文件
//	char arr[1000] = { 0 };
//	while (fgets(arr, 1000, pf))
//	{
//		printf("%s", arr);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//int main()
//{
//	//test_putc();
//	//test_getc();
//	test_puts();
//	test_gets();
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void test_fprintf()
//{
//	// 打开文件
//	FILE* pf = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("test_fprintf::fopen");
//		return;
//	}
//
//	// 写文件
//	struct Stu s = { "张三", 18, 95.5 };
//	fprintf(pf, "%s %d %lf\n", s.name, s.age, s.score);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//void test_fscanf()
//{
//	// 打开文件
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("test_fscanf");
//		return;
//	}
//
//	// 读文件
//	struct Stu s = { 0 };
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.score);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
//int main()
//{
//	test_fprintf();
//	test_fscanf();
//
//	return 0;
//}