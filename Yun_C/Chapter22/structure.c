#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

//구조체의 생성과 접근

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point pos1, pos2;
//	double distance;
//
//	fputs("point1 pos : ", stdout);
//	scanf("%d %d", &pos1.xpos, &pos1.ypos);
//
//	fputs("point2 pos : ", stdout);
//	scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
//
//	printf("두 점의 거리는 %f 입니다 \n", distance);
//
//	return 0;
//}


//구조체 배열 접근

//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void)
//{
//	struct person man1, man2;
//	strcpy(man1.name, "안성준");
//	strcpy(man1.phoneNum, "010-1122-3344");
//	man1.age = 30;
//
//	printf("이름 입력 : "); scanf("%s", man2.name);
//	printf("번호 입력 : "); scanf("%s", man2.phoneNum);
//	printf("나이 입력 : "); scanf("%d", &(man2.age));
//
//	printf("이름 : %s \n", man1.name);
//	printf("번호 : %s \n", man1.phoneNum);
//	printf("나이 : %d \n", man1.age);
//
//	printf("이름 : %s \n", man2.name);
//	printf("번호 : %s \n", man2.phoneNum);
//	printf("나이 : %d \n", man2.age);
//
//	return 0;
//}


//practice 1

//struct employee
//{
//	char name[20];
//	char personal[20];
//	int pay;
//};
//
//int main(void)
//{
//	struct employee man;
//
//	printf("이름 입력 : ");
//	scanf("%s", man.name);
//	printf("주민번호 입력 : ");
//	scanf("%s", man.personal);
//	printf("급여정보 입력 : ");
//	scanf("%d", &man.pay);
//
//	printf("이름 : %s \n", man.name);
//	printf("주민번호 : %s \n", man.personal);
//	printf("급여정보 : %d \n", man.pay);
//
//	return 0;
//}


//구조체 변수의 초기화

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void)
//{
//	struct point pos = { 10, 20 };
//	struct person man = { "이승기", "010-1212-0001", 221};
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}


//구조체 배열

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point arr[3];
//	
//	for (int i = 0; i < 3; i++)
//	{
//		printf("점의 좌표 입력 : ");
//		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//	}
//
//	for (int i = 0; i < 3; i++)
//		printf("[%d %d] ", arr[i].xpos, arr[i].ypos);
//
//	return 0;
//}


//구조체 배열 초기화

//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void)
//{
//	struct person arr[3] = {
//		{"이승기", "010-1212-0001", 21},
//		{"정지영", "010-1313-0002", 22},
//		{"한지수", "010-1414-0003", 19}
//	};
//
//	for (int i = 0; i < 3; i++)
//		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//
//	return 0;
//}


//practice 2

//struct employee
//{
//	char name[20];
//	char personal[20];
//	int pay;
//};
//
//int main(void)
//{
//	struct employee arr[3];
//	
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름 입력 : ");
//		scanf("%s", arr[i].name);
//		printf("주민번호 입력 : ");
//		scanf("%s", arr[i].personal);
//		printf("급여정보 입력 : ");
//		scanf("%d", &arr[i].pay);
//	}
//
//	for (int i = 0; i < 3; i++)
//		printf("이름 : %s \n주민번호 : %s \n급여정보 : %d \n", arr[i].name, arr[i].personal, arr[i].pay);
//
//	return 0;
//}


