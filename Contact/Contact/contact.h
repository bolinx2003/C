#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

// 通讯录初始状态的容量大小
#define DEFAULT_SZ 3

enum Option
{
	EXIT,   // 0
	ADD,    // 1
	DEL,    // 2
	SEARCH, // 3
	MODIFY, // 4
	SORT,   // 5
	PRINT,  // 6
	SAVE    // 7
};

// 存放一个人的信息
typedef struct PeoInfo
{
	char name[NAME_MAX]; // 姓名
	char sex[SEX_MAX];   // 性别
	int age;             // 年龄
	char tele[TELE_MAX]; // 电话
	char addr[ADDR_MAX]; // 住址
}PeoInfo;

// 静态的版本
//typedef struct Contact
//{
//	PeoInfo data[MAX]; // 可以存放1000个人的信息
//	int sz;            // 记录通讯录中已经保存的信息个数
//}Contact;

// 动态的版本
typedef struct Contact
{
	PeoInfo* data; // 指向联系人信息数组的指针
	int sz;        // 记录通讯录中已经保存的信息个数
	int capacity;  // 记录通讯录当前的最大容量
}Contact;

// 初始化通讯录
void InitContact(Contact* pc);

// 销毁通讯录
void DestroyContact(Contact* pc);

// 保存通讯录到文件
void SaveContact(const Contact* pc);

// 增加联系人的信息
void AddContact(Contact* pc);

// 打印通讯录中的信息
void PrintContact(const Contact* pc);

// 删除指定联系人
void DelContact(Contact* pc);

// 查找指定联系人
void SearchContact(const Contact* pc);

// 修改指定联系人
void ModifyContact(Contact* pc);

// 按照名字排序通讯录
void SortContact(Contact* pc);
