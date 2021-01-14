/*乘法运算*/

#include<stdio.h>     //预运算
#pragma warning(disable : 4996)   //关闭C4996警告
void young(void);
void now(void);
int main()    //函数开始
{
	young();
	puts("*********************************************");
	now();
	return 0;           //返回值

}

void young(void)
{
	float fi;   //定义多个函数
	float se;
	float th;

	printf("请输入第一个数：");    //显示
	scanf("%f", &fi);       //给予“fi”一个值
	printf("请输入第二个数：");   //显示
	scanf("%f", &se);          //给予“se”一个值
	th = fi * se;        //计算过程
	printf("答案：%.2f\n", th);

}

void now(void)
{
	int a, b, c;
	printf("请输入第一个数：");    //显示
	while (scanf("%d", &a) != 0)
	{
		printf("请输入第二个数：");   //显示
		scanf("%d", &b);          //给予“se”一个值
		c = a * b;        //计算过程
		printf("答案：%d\n", c);

		printf("请输入第一个数：（输入q退出）");    //显示
	}
	printf("done");
}
