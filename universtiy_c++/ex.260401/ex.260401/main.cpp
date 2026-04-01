#include <stdio.h>

int Add(int num1, int num2)
{
	int sum = num1 + num2;
	
	return sum;
}

void Print(int sum)
{
	printf("sum = %d\n", sum);
}

int main()
{
	int a = 10, b = 20;

	int sum = Add(a, b);

	Print(sum);

}


//#include <stdio.h>
//
//void PrintInteger(int num, int size, int step);
//
//int main()
//{
//	PrintInteger(3, 5, 2); 
//	PrintInteger(4, 8, 2);
//	PrintInteger(2, 10, 4);
//}
//
//void PrintInteger(int num,int size,int step) 
//{
//	for (int i = num; i <= size; i += step)
//	{
//		printf("%5d", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//void PrintInteger(int size) // signature, 매개변수(parameter)
//{
//	for (int i = 1; i <= size; ++i)
//	{
//		printf("%5d", i);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	PrintInteger(3); //인수(argument)
//	PrintInteger(4);
//	PrintInteger(2);
//}

//#include <stdio.h>
//
//int main()
//{
//
//	int i = 0, result = 0;
//
//	printf("i = %d, %d\n", i, result);
//	result = i += 1;
//	printf("i = %d, %d\n", i, result);
//
//}

//#include <stdio.h>
//
//int main()
//{
//
//	int i = 0, result = 0;
//
//	printf("i = %d, %d\n", i, result);
//	result = ++i;
//	printf("i = %d, %d\n", i, result);
//	result = ++i;
//	printf("i = %d, %d\n", i, result);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%-5d", i);
//		printf("%5d", i);
//	}
//	printf("\n");
//}