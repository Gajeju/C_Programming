#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

//���� ����

//int main(void)
//{
//	FILE* fp = fopen("data.txt", "wt");
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;							//�������� ����
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc('C', fp);
//	fclose(fp);
//
//	return 0;
//}


//������ �б�

//int main(void)
//{
//	int ch, i;
//	FILE* fp = fopen("data.txt", "rt");
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//	}
//	fclose(fp);
//
//	return 0;
//}


//���� �Է� �Լ�

//int main(void)
//{
//	FILE* fp = fopen("Simple.txt", "wt");
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputs("My name is Hong \n", fp);
//	fputs("Your name is Yoon \n", fp);
//	fclose(fp);
//
//	return 0;
//}


//���� �б� �Լ�

//int main(void)
//{
//	char str[30];
//	int ch;
//	FILE* fp = fopen("simple.txt", "rt");
//
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//
//	fclose(fp);
//
//	return 0;
//}


//feof ��� ���� ����

//int main(void)
//{
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("des.txt", "wt");
//	int ch;
//
//	if (src == NULL || des == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//
//	while ((ch = fgetc(src)) != EOF)
//		fputc(ch, des);
//	if (feof(src) != 0)
//		puts("���Ϻ��� �Ϸ�");
//	else
//		puts("���Ϻ��� ����");
//
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}


//���ڿ� ���� ���� ����

//int main(void)
//{
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("des.txt", "wt");
//	char str[20];
//
//	if (src == NULL || des == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//
//	while (fgets(str, sizeof(str), src) != NULL)
//		fputs(str, des);
//	if (feof(src) != 0)
//		puts("���Ϻ��� �Ϸ�");
//	else
//		puts("���Ϻ��� ����");
//
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}


//���̳ʸ� �����

//int main(void)
//{
//	FILE* src = fopen("src.bin", "rb");
//	FILE* des = fopen("dst.bin", "wb");
//	char buf[20];
//	int readCnt;
//
//	if (src == NULL || des == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//
//	while (1)
//	{
//		readCnt = fread((void*)buf, 1, sizeof(buf), des);
//
//		if (readCnt < sizeof(buf))
//		{
//			if (feof(src) != 0)
//			{
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("���Ϻ��� �Ϸ�");
//				break;
//			}
//			else
//				puts("���Ϻ��� ����");
//			break;
//		}
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	FILE* mystory = fopen("mystory.txt", "wt");
//	
//	fputs("#�̸� : ������ \n", mystory);
//	fputs("#�ֹι�ȣ : 900208-1012589 \n", mystory);
//	fputs("#��ȭ��ȣ : 010-1111-2222 \n", mystory);
//	
//	fclose(mystory);
//
//	return 0;
//}


//practice 2

//int main(void)
//{
//	FILE* mystory = fopen("mystory.txt", "at");
//
//	fputs("#��ܸԴ� ���� : «��, ������ \n", mystory);
//	fputs("#��� : �౸ \n", mystory);
//	fclose(mystory);
//
//	return 0;
//}


//practice 3

//int main(void)
//{
//	FILE* fp = fopen("mystory.txt", "rt");
//	char str[40];
//
//	while (fgets(str, sizeof(str), fp) != NULL)
//		printf(str);
//	fclose(fp);
//
//	return 0;
//}


//fprintf ����

//int main(void)
//{
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("friend.txt", "wt");
//	int i;
//
//	for (i = 0; i < 3; i++);
//	{
//		printf("�̸� ���� ���� �Է� : ");
//		scanf("%s %c %d", name, &sex, &age);
//		getchar();								//���ۿ� �����ִ� \n �Ҹ��� ���ؼ�
//		fprintf(fp, "%s %c %d", name, sex, age);
//	}
//	fclose(fp);
//
//	return 0;
//}


//fscanf �Լ�

//int main(void)
//{
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("friend.txt", "rt");
//	int ret;
//
//	while (1)
//	{
//		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
//		if (ret == EOF)
//			break;
//		printf("%s %c %d \n", name, sex, age);
//	}
//	fclose(fp);
//
//	return 0;
//}


//����ü ������ �����

//typedef struct fren
//{
//	char name[10];
//	char sex;
//	int age;
//} Friend;
//
//int main(void)
//{
//	FILE* fp;
//	Friend myfren1;
//	Friend myfren2;
//
//	//���� write
//	fp = fopen("friend.bin", "wb");
//	printf("�̸�, ����, ���� �� �Է� : ");
//	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//	
//	//���� read
//	fp = fopen("friend.bin", "rb");
//	fread((void*)& myfren2, sizeof(myfren2), 1, fp);
//	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
//	fclose(fp);
//
//	return 0;
//}


//���� ������ �̵�

//int main(void)
//{
//	//���� ����
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("123456789", fp);
//	fclose(fp);
//
//	//���� ����
//	fp = fopen("text.txt", "rt");
//
//	//SEEK_END
//	fseek(fp, -2, SEEK_END);
//	putchar(fgetc(fp));
//
//	//SEEK_SET
//	fseek(fp, 2, SEEK_SET);
//	putchar(fgetc(fp));
//
//	//SEEK_CUR
//	fseek(fp, 2, SEEK_CUR);
//	putchar(fgetc(fp));
//	
//	return 0;
//}


//���� ���� ��ġ ������ ã��

//int main(void)
//{
//	long fpos;
//	
//	//���� ����
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("1234-", fp);
//	fclose(fp);
//
//	//���� ����
//	fp = fopen("text.txt", "rt");
//
//	for (int i = 0; i < 4; i++)
//	{
//		putchar(fgetc(fp));
//		fpos = ftell(fp);
//		fseek(fp, -1, SEEK_END);
//		putchar(fgetc(fp));
//		fseek(fp, fpos, SEEK_SET);
//
//	}
//
//	return 0;
//}


//practice 2

long GetFileSize(FILE* fp);

int main(void)
{
	char str[100];
	FILE* fp = fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ�� : %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ�� : %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ�� : %ld \n", GetFileSize(fp));

	return 0;
}

long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);

	return fsize;
}