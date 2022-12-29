#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 计算二阶行列式

int main()
{
	printf("计算二阶行列式\n");

	double arr[2][2] = { 0 };
	printf("请输入第一行:>");
	scanf("%lf %lf", &arr[0][0], &arr[0][1]);
	printf("请输入第二行:>");
	scanf("%lf %lf", &arr[1][0], &arr[1][1]);

	printf("结果是: %lf\n", arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);

	return 0;
}