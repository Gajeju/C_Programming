#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

//��Ʈ���� ������ �� �ִ� �Լ�

//int main(void)
//{
//	int ch1, ch2;
//
//	ch1 = getchar();
//	ch2 = fgetc(stdin);
//
//	putchar(ch1);
//	fputc(ch2, stdout);
//
//	return 0;
//}


//EOF ��ȯ

//int main(void)
//{
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();
//		if (ch == 1)
//			break;
//		putchar(ch);
//	}
//
//	return 0;
//}


//practice1

//int main(void)
//{
//	int ch;
//	ch = getchar();
//
//	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//	{
//		ch = ch ^ 32;
//		putchar(ch);
//	}
//	else
//	{
//		puts("���ĺ��� �ƴմϴ�");
//	}
//	
//	return 0;
//}


//fputs puts����

//int main(void)
//{
//	char * str = "Simple String";
//
//	printf("1. puts test ----------- \n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test ------- \n");
//	fputs(str, stdout);
//	printf("\n");
//	fputs("So Simple String", stdout);
//	printf("\n");
//
//	printf("end of main ----- \n");
//
//	return 0;
//}


//fgets : ������ �����ϴ� ���ڿ��� ���� �� �ִ� �Լ�

//int main(void)
//{
//	char str[7];
//	
//	for (int i = 0; i < 3; i++)
//	{
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d : %s \n", i + 1, str);
//	}
//
//	return 0;
//}


//�Է¹��ۿ� �����ִ� ������

//int main(void)
//{
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//
//	fputs("�̸� �Է� : ", stdout);
//	fgets(name, sizeof(name), stdin);
//	
//	printf("�ֹι�ȣ : %s \n", perID);
//	printf("�̸� : %s \n", name);
//
//	return 0;
//}


//�Է¹��� �����

//void ClearLineFromReadBuffer(void);
//
//int main(void)
//{
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();
//
//	fputs("�̸� �Է� : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("�ֹι�ȣ : %s \n", perID);
//	printf("�̸� : %s \n", name);
//
//	return 0;
//}
//
//void ClearLineFromReadBuffer(void)
//{
//	while (getchar() != '\n');
//}


//strlen - ���ڿ��� ���� ���� (unsigned int)

//void RemoveBSN(char str[]);
//
//int main(void)
//{
//	char str[100];
//	printf("���ڿ� �Է� : ");
//	fgets(str, sizeof(str), stdin);
//	printf("���� : %d, ���� : %s \n", strlen(str), str);
//
//	RemoveBSN(str);
//	printf("���� : %d, ���� : %s \n", strlen(str), str);
//
//	return 0;
//}
//
//void RemoveBSN(char str[])
//{
//	int len = strlen(str);
//	str[len - 1] = 0;
//}


//���ڿ� ����

//int main(void)
//{
//	char str1[20] = "1234567890";
//	char str2[20];
//	char str3[5];
//
//	strcpy(str2, str1);
//	puts(str2);
//
//	strncpy(str3, str1, sizeof(str3));
//	puts(str3);
//
//	strncpy(str3, str1, sizeof(str3) - 1);
//	str3[sizeof(str3) - 1] = 0;
//	puts(str3);
//
//	return 0;
//}


//���ڿ� �̾� ���̱�

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num : ";
	char str4[20] = "1234567890";

	strcat(str1, str2);
	puts(str1);

	strncat(str3, str4, 6);
	puts(str3);

	return 0;

}