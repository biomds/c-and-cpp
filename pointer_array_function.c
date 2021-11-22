#include <stdio.h>
void menu();
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);

int main()

{
	menu();
	int input = 0;
	int x = 0;
	int y = 0;
	int (*parr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do {
		printf("请输入计算类型->");
		scanf_s("%d", &input);
		printf("请输入所要计算的整数数据->");
		scanf_s("%d%d", &x, &y);
		if (input > 0 and input < 5)
		{
			int ret = parr[input](x, y);
			printf("计算结果是%d\n", ret);
		}
		else if (input == 0)
		{
			puts("退出计算");
		}
		else
		{
			puts("输入错误");
		}

	} while (input);
	return 0;
}


void menu()
{
	printf("*******************************\n");
	printf("****   1:add  2:sub       *****\n");
	printf("****   3:mul  4:div       *****\n");
	printf("****   0:quit other: err  *****\n");
	printf("*******************************\n");


}


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)

{
	return x / y;
}

