#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("*************************************\n");
	printf("*****   1. add         2. del   *****\n");
	printf("*****   3. search      4. modify*****\n");
	printf("*****   5. show        6. sort  *****\n");
	printf("*****   0. exit                 *****\n");
	printf("*************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

void test()
{
	int input = 0;
	struct Contact con;//创建了一个通讯录

	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		case SORT:
			SortContact(&con);
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}