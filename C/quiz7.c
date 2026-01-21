#include<stdio.h>

int main()

{

	//3단을 출력하세요

	// 3*1=3 ~ 3*9=27

	int i = 0;

	int result = 0;

	for (int i = 1; i <= 9; i++)

	{

		result = 3 * i;

		printf("3x%d=%d\n", i, result);

	}




	return 0;

}







#include<stdio.h>

int main()

{


	//대문자 A~Z까지 소문자 a ~z까지 출력

	for (int i = 'A'; i <= 'Z'; i++)

	{

		printf("%c", i);

	}

	printf("\n");

	for (int i = 'a'; i <= 'z'; i++)

	{

		printf("%c", i);

	}





	return 0;

}



