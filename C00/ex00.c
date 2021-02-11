#include <stdio.h>

int main(void) 
{float x, y, c;
	printf("수학 점수를 입력하세요:  ");
	scanf("%f", &x);
	printf("영어 점수를 입력하세요:  ");
	scanf("%f", &y);

	c = (x + y)/2;

	printf("평균: %.1f\n", c);

	if (c >= 90)
	{
		   printf("학점: A\n");
	}
	else if (c >= 80)
	{
		   printf("학점: B\n");
	}
	else if (c >= 70)
	{
		   printf("학점: C\n");
	}
	else if (c >= 60)
	{
		   printf("학점: D\n");
	}
	else
	{
		   printf("학점: F\n");
	}
	   return 0;
}
