/*乘法运算*/

#include<stdio.h>     //预运算
#pragma warning(disable : 4996)   //关闭C4996警告
int main()    //函数开始
{
	float fi;   //定义多个函数
	float se;
	float th;

	printf("请输入第一个数：");    //显示

	scanf("%f", &fi);       //给予“fi”一个值

	printf("\n请输入第二个数：");   //显示

	scanf("%f", &se);          //给予“se”一个值

	th = fi * se;        //计算过程

	printf("\n结果是：%.2f", th);    //输出“th”

	getchar();          //用于第一次输入
	getchar();          //用于第二次输入
	getchar();          //用于结束

	return 0;           //返回值

}

