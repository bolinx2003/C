#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ʹ�ÿ⺯�����ݹ�ʵ�������ַ���
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//	// ���������ַ�
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//
//	// �����м��ַ���
//	if (my_strlen(str+1) >= 2)
//		reverse_string(str + 1);
//
//	*right = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefghi";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

