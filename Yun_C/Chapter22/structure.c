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


//����ü ������

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point pos1 = { 1, 2 };
//	struct point pos2 = { 100, 200 };
//	struct point* p = &pos1;
//
//	(*p).xpos += 4;
//	(*p).ypos += 5;
//	printf("[%d %d] \n", p->xpos, p->ypos);
//
//	p = &pos2;
//	p->xpos += 1;
//	p->ypos += 2;
//	printf("[%d %d] \n", (*p).xpos, (*p).ypos);
//
//	return 0;
//}


//������ ������ ����ü �ɹ��� ���

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//struct circle
//{
//	double radius;
//	struct point * center;
//
//};
//
//int main(void)
//{
//	struct point cen = { 2, 7 };
//	double rad = 5.5;
//
//	struct circle ring = { rad, &cen };
//	printf("���� ������ : %f \n", ring.radius);
//	printf("���� �߽� [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//
//	return 0;
//}


//����ü �����ɹ��� ��ü �����ͺ��� ���

//struct point
//{
//	int xpos;
//	int ypos;
//	struct point* p;
//};
//
//int main(void)
//{
//	struct point pos1 = { 1, 1 };
//	struct point pos2 = { 2, 2 };
//	struct point pos3 = { 3, 3 };
//
//	pos1.p = &pos2;
//	pos2.p = &pos3;
//	pos3.p = &pos1;
//
//	printf("----���� �������----  \n");
//	printf("[%d %d] and [%d %d] ���� \n", pos1.xpos, pos1.ypos, pos1.p->xpos, pos1.p->ypos);
//	printf("[%d %d] and [%d %d] ���� \n", pos2.xpos, pos2.ypos, pos2.p->xpos, pos2.p->ypos);
//	printf("[%d %d] and [%d %d] ���� \n", pos3.xpos, pos3.ypos, pos3.p->xpos, pos3.p->ypos);
//
//	return 0;
//}


//����ü ������ �ּҰ�

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
//	struct person man = { "�̽±�", "010-1234-5678", 21 };
//
//	printf("%p %p \n", &pos, &pos.xpos);
//	printf("%p %p \n", &man, &man.name);
//
//	return 0;
//}


//typedef

//typedef int INT;
//typedef int* PTR_INT;
//
//typedef unsigned int UINT;
//typedef unsigned int* PTR_UINT;
//
//typedef unsigned char UCHAR;
//typedef unsigned char * PTR_UCHAR;
//
//int main(void)
//{	
//	INT num1 = 120;
//	PTR_INT pnum1 = &num1;
//
//	UINT num2 = 190;
//	PTR_UINT pnum2 = &num2;
//
//	UCHAR ch = 'Z';
//	PTR_UCHAR pch = &ch;
//
//	printf("%d %u %c \n", *pnum1, *pnum2, *pch);
//
//	return 0;
//}


//����ü�� �Ϲ����� ����

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//typedef struct point Point;
//
//typedef struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//int main(void)
//{
//	Point pos = { 10, 20 };
//	Person man = { "�̽±�", "010-1212-0001", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}


//����ü������ �Լ��� ���ϰ��� ���ڷ� ���

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//void ShowPosition(Point pos)
//{
//	printf("[%d %d] \n", pos.xpos, pos.ypos);
//}
//
//Point GetCurrentPosition(void)
//{
//	Point cen;
//	printf("Input current pos : ");
//	scanf("%d %d", &cen.xpos, &cen.ypos);
//	return cen;
//}
//
//int main(void)
//{
//	Point curPos = GetCurrentPosition();
//	ShowPosition(curPos);
//
//	return 0;
//}


//�迭 ���

//typedef struct person
//{
//	char name[20];
//	char phonNum[20];
//	int age;
//} Person;
//
//void ShowPersonInfo(Person man)
//{
//	printf("name : %s \n", man.name);
//	printf("phone : %s \n", man.phonNum);
//	printf("age : %d \n", man.age);
//}
//
//Person ReadPersonInfo(void)
//{
//	Person man;
//	printf("name? : "); scanf("%s", man.name);
//	printf("phone? : "); scanf("%s", man.phonNum);
//	printf("age? : "); scanf("%d", &man.age);
//
//	return man;
//}
//
//int main(void)
//{
//	Person man = ReadPersonInfo();
//	ShowPersonInfo(man);
//
//	return 0;
//}


//����ü ����ȣ��

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//void OrgSymTrans(Point* p)
//{
//	p->xpos = (p->xpos) * (-1);
//	p->ypos = (p->ypos) * (-1);
//}
//
//void ShowPosition(Point pos)
//{
//	printf("[%d %d] \n", pos.xpos, pos.ypos);
//}
//
//int main(void)
//{
//	Point pos = { 7, -5 };
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//
//	return 0;
//}


//����ü ������ ����

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//int main(void)
//{
//	Point pos1 = { 1, 2 };
//	Point pos2;
//	pos2 = pos1;
//	
//	printf("ũ�� : %d \n", sizeof(pos1));
//	printf("[%d %d] \n", pos1.xpos, pos1.ypos);
//	printf("ũ�� : %d \n", sizeof(pos2));
//	printf("[%d %d] \n", pos2.xpos, pos2.ypos);
//
//	return 0;
//}


//����ü������ �ϴ� �Լ� ����

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//Point AddPoint(Point pos1, Point pos2)
//{
//	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
//	return pos;
//}
//
//Point MinPoint(Point pos1, Point pos2)
//{
//	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
//	return pos;
//}
//
//int main(void)
//{
//	Point pos1 = { 5, 6 };
//	Point pos2 = { 2, 9 };
//	Point result;
//
//	result = AddPoint(pos1, pos2);
//	printf("[%d %d] \n", result.xpos, result.ypos);
//	result = MinPoint(pos1, pos2);
//	printf("[%d %d] \n", result.xpos, result.ypos);
//
//	return 0;
//}


//practice

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//void Swap(Point * p1, Point * p2)
//{
//	Point temp;
//
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main(void)
//{
//	Point pos1 = { 2, 4 };
//	Point pos2 = { 5, 7 };
//
//	Swap(&pos1, &pos2);
//
//	printf("[%d %d] \n", pos1.xpos, pos1.ypos);
//	printf("[%d %d] \n", pos2.xpos, pos2.ypos);
//
//	return 0;
//}


//����ü�� ����ϴ� ����

//typedef struct studnet
//{
//	char name[20];
//	char stdnum[20];
//	char school[20];
//	char major[20];
//	int year;
//} Student;
//
//void ShowStudentInfo(Student* sptr)
//{
//	printf("�л� �̸� : %s \n", sptr->name);
//	printf("�л� ������ȣ : %s \n", sptr->stdnum);
//	printf("�б� �̸� : %s \n", sptr->school);
//	printf("���� ���� : %s \n", sptr->major);
//	printf("�г� : %d \n", sptr->year);
//}
//
//int main(void)
//{
//	Student arr[7];
//	
//	for (int i = 0; i < 7; i++)
//	{
//		printf("�̸� : "); scanf("%s", arr[i].name);
//		printf("��ȣ : "); scanf("%s", arr[i].stdnum);
//		printf("�б� : "); scanf("%s", arr[i].school);
//		printf("���� : "); scanf("%s", arr[i].major);
//		printf("�г� : "); scanf("%d", &arr[i].year);
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		ShowStudentInfo(&arr[i]);
//	}
//
//	return 0;
//}


//��ø�� ����ü

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct circle
//{
//	Point cen;
//	double rad;
//} Circle;
//
//void ShowCircleInfo(Circle* cptr)
//{
//	printf("[%d %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
//	printf("radius : %g \n\n", cptr->rad);
//}
//
//int main(void)
//{
//	Circle c1 = { {1, 2}, 3.5 };
//	Circle c2 = { 2, 4, 3.9 };
//	ShowCircleInfo(&c1);
//	ShowCircleInfo(&c2);
//
//	return 0;
//}

