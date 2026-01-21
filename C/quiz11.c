#include<stdio.h>



void print_line(int number);



int main()

{

	print_line(50);

	printf("학번\t이름\t전공\t학점\t\n");

	print_line(50);



	return 0;

}



void print_line(int number)

{

	for (int i = 0; i < number; i++)

	{

		printf("-");

	}

	printf("\n");

}