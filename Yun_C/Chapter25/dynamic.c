#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#pragma warning (disable : 6001)

//�޸� �����Ҵ��� �ʿ伺

char* ReadUserName(void)
{
	char name[10];
	printf("What's your name?");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName();
	printf("name1 : %s \n", name2);

	return 0;
}