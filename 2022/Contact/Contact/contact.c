#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

static void CheckCapacity(Contact* pc)
{
	assert(pc);

	if (pc->sz == pc->capacity)
	{
		// 扩容
		PeoInfo* tmp = (PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (tmp == NULL)
		{
			perror("CheckCapacity::realloc");
			return;
		}

		// 扩容成功
		pc->data = tmp;
		pc->capacity += 2;
		printf("增容成功\n");
	}
}

// 静态的版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//
//	// 全部初始化为0
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->sz = 0;
//
//	printf("初始化成功\n");
//}

// 动态的版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//
//	pc->sz = 0;
//	pc->capacity = DEFAULT_SZ;
//	// calloc会把空间默认初始化成0
//	pc->data = (PeoInfo*)calloc(pc->capacity, sizeof(PeoInfo));
//	if (pc->data == NULL)
//	{
//		perror("InitContact::calloc");
//		return;
//	}
//	printf("初始化成功\n");
//}

static void LoadContact(Contact* pc)
{
	assert(pc);

	// 打开文件
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}

	// 读文件
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz++] = tmp;
	}

	// 关闭文件
	fclose(pf);
	pf = NULL;

	printf("加载成功\n");
}

// 文件的版本
void InitContact(Contact* pc)
{
	assert(pc);

	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	// calloc会把空间默认初始化成0
	pc->data = (PeoInfo*)calloc(pc->capacity, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact::calloc");
		return;
	}

	// 加载文件信息到通讯录中
	LoadContact(pc);

	printf("通讯录初始化成功\n");
}

void DestroyContact(Contact* pc)
{
	assert(pc);

	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("销毁成功\n");
}

void SaveContact(const Contact* pc)
{
	assert(pc);

	// 打开文件
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}

	// 写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	// 关闭文件
	fclose(pf);
	pf = NULL;

	printf("保存成功\n");
}

void AddContact(Contact* pc)
{
	assert(pc);

	// 静态的版本
	//if (pc->sz == MAX)
	//{
	//	printf("通讯录已满，无法添加\n");
	//	return;
	//}

	// 动态的版本
	CheckCapacity(pc);

	// 录入信息
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}

void PrintContact(const Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	// 打印标题行
	printf("%-20s %-5s %-5s %-12s %-30s\n",
		"姓名", "年龄", "性别", "电话", "住址");

	// 打印数据
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5d %-5s %-12s %-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

// 找到了返回下标
// 找不到返回-1
static int FindByName(const Contact* pc, char name[])
{
	assert(pc);

	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			// 找到了
			return i;
		}
	}

	// 找不到
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}

	// 删除
	// 1. 找到
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除的联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("您要删除的联系人不存在\n");
		return;
	}
	// 2. 删除
	memmove(&(pc->data[pos]),
		&(pc->data[pos + 1]),
		(pc->sz - pos - 1) * sizeof(pc->data[0]));
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	// 1. 查找
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("您要查找的联系人不存在\n");
		return;
	}
	// 2. 打印
	// 打印标题行
	printf("%-20s %-5s %-5s %-12s %-30s\n",
		"姓名", "年龄", "性别", "电话", "住址");
	// 打印数据
	printf("%-20s %-5d %-5s %-12s %-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	// 1. 查找
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改的联系人的姓名:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("您要修改的联系人不存在\n");
		return;
	}
	// 2. 修改
	// 录入信息
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入住址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}

static int CmpByName(const void* e1, const void* e2)
{
	assert(e1 && e2);

	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	qsort(pc->data, pc->sz, sizeof(pc->data[0]), CmpByName);
	printf("排序成功\n");
}