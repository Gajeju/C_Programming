#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

//����ü�� ������ ����

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
//	printf("�� ���� �Ÿ��� %f �Դϴ� \n", distance);
//
//	return 0;
//}


//����ü �迭 ����

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
//	strcpy(man1.name, "�ȼ���");
//	strcpy(man1.phoneNum, "010-1122-3344");
//	man1.age = 30;
//
//	printf("�̸� �Է� : "); scanf("%s", man2.name);
//	printf("��ȣ �Է� : "); scanf("%s", man2.phoneNum);
//	printf("���� �Է� : "); scanf("%d", &(man2.age));
//
//	printf("�̸� : %s \n", man1.name);
//	printf("��ȣ : %s \n", man1.phoneNum);
//	printf("���� : %d \n", man1.age);
//
//	printf("�̸� : %s \n", man2.name);
//	printf("��ȣ : %s \n", man2.phoneNum);
//	printf("���� : %d \n", man2.age);
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
//	printf("�̸� �Է� : ");
//	scanf("%s", man.name);
//	printf("�ֹι�ȣ �Է� : ");
//	scanf("%s", man.personal);
//	printf("�޿����� �Է� : ");
//	scanf("%d", &man.pay);
//
//	printf("�̸� : %s \n", man.name);
//	printf("�ֹι�ȣ : %s \n", man.personal);
//	printf("�޿����� : %d \n", man.pay);
//
//	return 0;
//}


//����ü ������ �ʱ�ȭ

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
//	struct person man = { "�̽±�", "010-1212-0001", 221};
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}


//����ü �迭

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
//		printf("���� ��ǥ �Է� : ");
//		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//	}
//
//	for (int i = 0; i < 3; i++)
//		printf("[%d %d] ", arr[i].xpos, arr[i].ypos);
//
//	return 0;
//}


//����ü �迭 �ʱ�ȭ

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
//		{"�̽±�", "010-1212-0001", 21},
//		{"������", "010-1313-0002", 22},
//		{"������", "010-1414-0003", 19}
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
//		printf("�̸� �Է� : ");
//		scanf("%s", arr[i].name);
//		printf("�ֹι�ȣ �Է� : ");
//		scanf("%s", arr[i].personal);
//		printf("�޿����� �Է� : ");
//		scanf("%d", &arr[i].pay);
//	}
//
//	for (int i = 0; i < 3; i++)
//		printf("�̸� : %s \n�ֹι�ȣ : %s \n�޿����� : %d \n", arr[i].name, arr[i].personal, arr[i].pay);
//
//	return 0;
//}


