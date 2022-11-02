#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//void Swap(char* p1, char* p2, int width)
//{
//	assert(p1 && p2);
//
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	assert(base && cmp);
//
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1; // 假设有序
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				flag = 0;
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//
//	return *(int*)e1 - *(int*)e2;
//}
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}Stu;
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//
//	return ((Stu*)e1)->age - ((Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//
//int main()
//{
//	//int arr[] = { 11,10,9,8,7,6,5,4,3,2,1,0,-1 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//print_arr(arr, sz);
//
//	Stu arr[] = { {"zhangsan", 35, 70.0}, {"lisi", 20, 80.0}, {"wangwu", 40, 90.0} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %lf\n", arr[i].name, arr[i].age, arr[i].score);
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//void test_strcpy1()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//
//	my_strcpy(arr1, arr2);
//	printf("test_strcpy1::%s\n", arr1);
//}
//
//void test_strcpy2()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//
//	printf("test_strcpy2::%s\n", my_strcpy(arr1, arr2));
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
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
//
//	return ret;
//}
//
//void test_strcat1()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//
//	my_strcat(arr1, arr2);
//	printf("test_strcat1::%s\n", arr1);
//}
//
//void test_strcat2()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//
//	printf("test_strcat2::%s\n", my_strcat(arr1, arr2));
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0; // 相等
//		}
//
//		str1++;
//		str2++;
//	}
//	// 不相等
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
//void test_strcmp()
//{
//	char arr1[] = "abcdefghijkl";
//	char arr2[] = "abq";
//	char arr3[] = "abcddefffffghijkl";
//	char arr4[] = "abq";
//
//	if (my_strcmp(arr1, arr2) < 0
//		&& my_strcmp(arr1, arr3) > 0
//		&& my_strcmp(arr2, arr4) == 0)
//	{
//		printf("测试成功\n");
//	}
//	else
//	{
//		printf("测试失败\n");
//	}
//}
//
//int main()
//{
//	test_strcmp();
//
//	//char arr1[] = "abcdefghijkl";
//	//char arr2[] = "abq";
//	//
//	//int ret = my_strcmp(arr1, arr2);
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
//	return 0;
//}

//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	while (count && (*dest++ = *src++) != '\0')
//	{
//		count--;
//	}
//
//	if (count)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strncat(char* front, const char* back, size_t count)
//{
//	assert(front && back);
//	char* start = front;
//
//	// 找front中的\0
//	while (*front)
//	{
//		front++;
//	}
//	// 拷贝
//	while (count--)
//	{
//		if ((*front++ = *back++) == '\0')
//		{
//			return start;
//		}
//	}
//
//	*front = '\0';
//	return start;
//}

//int my_strncmp(const char* first, const char* last, size_t count)
//{
//	assert(first && last);
//	size_t x = 0;
//
//	if (count == 0)
//	{
//		return 0;
//	}
//
//	if (count >= 4)
//	{
//		for (; x < count - 4; x += 4)
//		{
//			first += 4;
//			last += 4;
//
//			if (*(first - 4) == 0 || *(first - 4) != *(last - 4))
//			{
//				return *(unsigned char*)(first - 4) - *(unsigned char*)(last - 4);
//			}
//
//			if (*(first - 3) == 0 || *(first - 3) != *(last - 3))
//			{
//				return *(unsigned char*)(first - 3) - *(unsigned char*)(last - 3);
//			}
//
//			if (*(first - 2) == 0 || *(first - 2) != *(last - 2))
//			{
//				return *(unsigned char*)(first - 2) - *(unsigned char*)(last - 2);
//			}
//
//			if (*(first - 1) == 0 || *(first - 1) != *(last - 1))
//			{
//				return *(unsigned char*)(first - 1) - *(unsigned char*)(last - 1);
//			}
//		}
//	}
//
//	for (; x < count; x++)
//	{
//		if (*first == 0 || *first != *last)
//		{
//			return *(unsigned char*)first - *(unsigned char*)last;
//		}
//		first += 1;
//		last += 1;
//	}
//
//	return 0;
//}

//int my_strncpy(const char* s1, const char* s2, size_t count)
//{
//	assert(s1 && s2);
//
//	while (1)
//	{
//		if (count == 0)
//		{
//			return 0;
//		}
//		else if (*s1 > *s2)
//		{
//			return 1;
//		}
//		else if (*s1 < *s2)
//		{
//			return -1;
//		}
//		else
//		{
//			if (*s1 == '\0')
//			{
//				return 0;
//			}
//			s1++;
//			s2++;
//			count--;
//		}
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdfg";
//	int ret = my_strncpy(arr1, arr2, 5);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf("==\n");
//	}
//
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cur = str1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			// 找到了
//			return (char*)cur;
//		}
//
//		cur++;
//	}
//
//	// 找不到
//	return NULL;
//}

//int main()
//{
//	char arr1[] = "abbbbbcdefg";
//	char arr2[] = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("找不到子串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}