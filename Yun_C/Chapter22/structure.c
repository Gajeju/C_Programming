#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 6001)
//구조체의 생성과 접근

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("두 점의 거리는 %f 입니다 \n", distance);

	return 0;
}