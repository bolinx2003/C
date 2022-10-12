#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = left + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}

//void reverse_string(char arr[])
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		++left;
//		--right;
//	}
//}

// Ê¹ÓÃµÝ¹é
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//
//	// ÄæÐòÖÐ¼äµÄ×Ö·û´®
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	// ÄæÖÃ×Ö·û´®
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int DigitSum(unsigned int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += (n % 10);
//		n /= 10;
//	}
//	return sum;
//}

//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}

//double Power(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		int ret = 1;
//		while (k--)
//		{
//			ret *= n;
//		}
//		return ret;
//	}
//	else
//	{
//		int ret = 1;
//		k = -k;
//		while (k--)
//		{
//			ret *= n;
//		}
//		return 1.0 / ret;
//	}
//}

//double Power(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return Power(n, k - 1) * n;
//	}
//	else
//	{
//		return 1.0 / Power(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

