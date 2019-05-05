#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

//스트림을 지정할 수 있는 함수

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


//EOF 반환

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
//		puts("알파벳이 아닙니다");
//	}
//	
//	return 0;
//}


//fputs puts차이

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


//fgets : 공백을 포함하는 문자열을 받을 수 있는 함수

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


//입력버퍼에 남아있는 데이터

//int main(void)
//{
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력 : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//
//	fputs("이름 입력 : ", stdout);
//	fgets(name, sizeof(name), stdin);
//	
//	printf("주민번호 : %s \n", perID);
//	printf("이름 : %s \n", name);
//
//	return 0;
//}


//입력버퍼 지우기

//void ClearLineFromReadBuffer(void);
//
//int main(void)
//{
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력 : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();
//
//	fputs("이름 입력 : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("주민번호 : %s \n", perID);
//	printf("이름 : %s \n", name);
//
//	return 0;
//}
//
//void ClearLineFromReadBuffer(void)
//{
//	while (getchar() != '\n');
//}


//strlen - 문자열의 길이 리턴 (unsigned int)

//void RemoveBSN(char str[]);
//
//int main(void)
//{
//	char str[100];
//	printf("문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
//
//	RemoveBSN(str);
//	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
//
//	return 0;
//}
//
//void RemoveBSN(char str[])
//{
//	int len = strlen(str);			//'\n' 자리에 널문자를 삽입하여 마지막 문자 삭제
//	str[len - 1] = 0;
//}


//문자열 복사

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


//문자열 이어 붙이기

//int main(void)
//{
//	char str1[20] = "First~";
//	char str2[20] = "Second";
//
//	char str3[20] = "Simple num : ";
//	char str4[20] = "1234567890";
//
//	strcat(str1, str2);
//	puts(str1);
//
//	strncat(str3, str4, 6);
//	puts(str3);
//
//	return 0;
//
//}


//문자열 비교

//int main(void)
//{
//	char str1[20];
//	char str2[20];
//
//	printf("문자열 입력 1 : ");
//	scanf("%s", str1);
//	printf("문자열 입력 2 : ");
//	scanf("%s", str2);
//
//	if (!strcmp(str1, str2))
//	{
//		puts("두 문자열은 완벽히 동일합니다.");
//	}
//	else
//	{
//		puts("두 문자열은 동일하지 않습니다.");
//
//		if (!strncmp(str1, str2, 3))
//			puts("그러나 앞 세 글자는 동일합니다.");
//	}
//	return 0;
//}


//문자열을 숫자로 변환

//int main(void)
//{
//	char str[20];
//	printf("정수 입력 : ");
//	scanf("%s", str);
//	printf("%d \n", atoi(str));
//
//	printf("실수 입력 : ");
//	scanf("%s", str);
//	printf("%f \n", atof(str));
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	char str[20];
//	int sum = 0;
//
//	printf("문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			sum += (str[i] - 48);
//		}
//	}
//
//	printf("결과 : %d \n", sum);
//
//	return 0;
//}


//practice 2

//void deleteEnter(char str[])
//{
//	str[strlen(str) - 1] = 0;
//}
//
//int main(void)
//{
//	char str1[20];
//	char str2[20];
//	char str3[20];
//
//	printf("첫번째 문자열 입력 : ");
//	fgets(str1, sizeof(str1), stdin);
//	deleteEnter(str1);
//
//	printf("두번째 문자열 입력 : ");
//	fgets(str2, sizeof(str2), stdin);
//	deleteEnter(str2);
//
//	printf("세번째 문자열 입력 : ");
//	fgets(str3, sizeof(str3), stdin);
//	deleteEnter(str3);
//
//	strcat(str3, str1);
//	strcat(str3, str2);
//
//	printf("결과 : %s", str3);
//
//	return 0;
//}


//practice3

int main(void)
{
	int str1[20];
	int str2[20];

	printf("첫번째 이름과 나이 입력 : ");
	fgets(str1, sizeof(str1), stdin);

	printf("두번째 이름과 나이 입력 : ");
	fgets(str2, sizeof(str2), stdin);

	return 0;
}