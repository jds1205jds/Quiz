#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS



int main()

{



	int a, b, c, d = 0;

	double avg = 0;

	printf("입력 : ");

	scanf_s("%d  %d  %d  %d", &a, &b, &c, &d);

	avg = (a + b + c + d) / (double)4;

	printf("출력 : %.2lf", avg);



	return 0;

}

