#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)

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


//구조체의 일반적인 선언

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
//	Person man = { "이승기", "010-1212-0001", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}


//구조체변수를 함수의 리턴값과 인자로 사용

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


//배열 사용

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


//구조체 참조호출

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


//구조체 변수의 연산

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
//	printf("크기 : %d \n", sizeof(pos1));
//	printf("[%d %d] \n", pos1.xpos, pos1.ypos);
//	printf("크기 : %d \n", sizeof(pos2));
//	printf("[%d %d] \n", pos2.xpos, pos2.ypos);
//
//	return 0;
//}


//구조체연산을 하는 함수 정의

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


//구조체를 사용하는 이유

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
//	printf("학생 이름 : %s \n", sptr->name);
//	printf("학생 고유번호 : %s \n", sptr->stdnum);
//	printf("학교 이름 : %s \n", sptr->school);
//	printf("선택 정공 : %s \n", sptr->major);
//	printf("학년 : %d \n", sptr->year);
//}
//
//int main(void)
//{
//	Student arr[7];
//	
//	for (int i = 0; i < 7; i++)
//	{
//		printf("이름 : "); scanf("%s", arr[i].name);
//		printf("번호 : "); scanf("%s", arr[i].stdnum);
//		printf("학교 : "); scanf("%s", arr[i].school);
//		printf("전공 : "); scanf("%s", arr[i].major);
//		printf("학년 : "); scanf("%d", &arr[i].year);
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		ShowStudentInfo(&arr[i]);
//	}
//
//	return 0;
//}


//중첩된 구조체

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


//practice2

//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct rectangle
//{
//	Point lr;
//	Point ul;
//
//} Rectangle;
//
//void ShowRecArea(Rectangle rec)
//{
//	printf("넓이 : %d \n", (rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
//}
//
//void ShowRecPos(Rectangle rec)
//{
//	printf("좌 상단 : [%d %d] \n", rec.ul.xpos, rec.ul.ypos);
//	printf("좌 하단 : [%d %d] \n", rec.ul.xpos, rec.lr.ypos);
//	printf("우 상단 : [%d %d] \n", rec.lr.xpos, rec.ul.ypos);
//	printf("우 하단 : [%d %d] \n", rec.lr.xpos, rec.lr.ypos);
//}
//
//int main(void)
//{
//	Rectangle rec1 = { {1,1}, {4,4} };
//	Rectangle rec2 = { {0,0}, {7,5} };
//	ShowRecArea(rec1);
//	ShowRecPos(rec1);
//	ShowRecArea(rec2);
//	ShowRecPos(rec2);
//	
//	return 0;
//}


//공동체

//typedef struct sbos
//{
//	int men1;
//	int men2;
//	double men3;
//} SBox;
//
//typedef union ubox
//{
//	int men1;
//	int men2;
//	double men3;
//} UBox;
//
//int main(void)
//{
//	SBox sbx;
//	UBox ubx;
//	printf("%p %p %p \n", &sbx.men1, &sbx.men2, &sbx.men3);
//	printf("%p %p %p \n", &ubx.men1, &ubx.men2, &ubx.men3);
//	printf("%zd %zd \n", sizeof(SBox), sizeof(UBox));
//
//	return 0;
//}


//공동체 특징

//typedef union ubox
//{
//	int men1;
//	int men2;
//	double men3;
//} UBox;
//
//int main(void)
//{
//	UBox ubx;
//	ubx.men1 = 20;
//	printf("%d \n", ubx.men2);
//
//	ubx.men3 = 7.15;
//	printf("%d \n", ubx.men1);
//	printf("%d \n", ubx.men2);
//	printf("%f \n", ubx.men3);
//
//	return 0;
//}


//공동체를 이용하여 메모리 접근

//typedef struct dbshor
//{
//	unsigned short upper;
//	unsigned short lower;
//} DBShort;
//
//typedef union rdbuf
//{
//	int iBuf;
//	char bBuf[4];
//	DBShort sBuf;
//} RDBuf;
//
//int main(void)
//{
//	RDBuf buf;
//	printf("정수 입력 : ");
//	scanf("%d", &(buf.iBuf));
//
//	printf("상위 2비트 : %u \n", buf.sBuf.upper);
//	printf("하위 2비트 : %u \n", buf.sBuf.lower);
//	printf("상위 1바이트 아스키 코드  : %u \n", buf.sBuf.upper);
//	printf("상위 2비트 : %u \n", buf.sBuf.upper);
//
//	return 0;
//}


//열거형

typedef enum syllable
{
	Do = 1, Re, Me, Fa, So, La, Ti
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도"); return;
	case Re:
		puts("레"); return;
	case Me:
		puts("미"); return;
	case Fa:
		puts("파"); return;
	case So:
		puts("솔"); return;
	case La:
		puts("라"); return;
	case Ti:
		puts("시"); return;
	}
}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);

	return 0;
}