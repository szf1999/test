#define  _CRT_SECURE_NO_WARNINGS  1  //消除不安全函数错误:D:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\VC\VCProjectItems

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int Fibonacci(int n)//斐波那契数
{
	int i = 0;
	int f1 = 1, f2 = 1, temp=0,num[10] = { 0 };
	for (i = 0; i < n; i++)
	{
		if (i < 2)
			num[i] = 1;
		else
		{
			num[i] = f1 + f2;
			temp = f2;
			f2 = f1 + f2;
			f1 = temp;
		}
	}
	return 0;
}
int main()
{
	int n = 10;
	Fibonacci(n);
	return 0;
}
//int main() //数组转置
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 }, b[3][3] = { 0 };
//	int i = 0, j = 0;
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	return 0;
//}
//#define N 6
//int main()
//{
//	int num[N] = { 0 },password[N] = { 1 ,2,3,4,5,6};
//	int i = 0;
//	int count = 0;
//	int right = 1;
//	while (1)
//	{
//		if (count < 3)
//		{
//			printf("请输入密码：\n");
//			for (i = 0; i < N; i++)
//			{
//				scanf("%d",&num[i]);
//			}
//		}
//		else
//		{
//		printf("三次输入错误\n");
//		return 0;
//		}
//
//		for (i = 0; i < N; i++)
//		{
//			if (num[i] != password[i])
//			{
//				printf("密码错误\n");
//				count++;
//				right = 0;
//				break;
//			}		
//		}
//		if (right == 1)
//		{
//			printf("密码正确");
//			break;
//			//for (i = 0; i < N; i++)
//			//{
//			//	
//			//	printf("请输入密码：\n");
//			//}
//		}	
//	}
//	return 0;
//}
//#define N 10
//int main()     //二分法查找有序数据
//{
//	int num=0,n[N] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0,right=N-1;
//	scanf("%d",&num);
//	while (left <=right )
//	{
//		int half = (left + right) / 2;
//		if (num < n[half])
//		{
//			right = half - 1;
//		}
//		else if(num>n[half])
//		{
//			left = half + 1;
//		}
//		else if (num == n[half])
//		{
//			printf("找到了:%d\n", n[half]);
//			break;
//		}
//	}
//	if(left > right)
//		printf("没找到\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	short* p = &a;
//	*p = 0x33224455;
//
//	return 0;
//}
//int main() // 冒泡排序
//{
//	int i = 0, j = 0, a[100] = { 0 },n=0;
//	scanf("%d",&n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < (n-1); i++)
//	{
//		for (j = 0; j < (n-1 - i); j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = 0;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d  ",a[i]);
//	return 0;
//}

//int main()
//{
//	char a = 'a';
//	char* p=&a;
//	if (0 == (*p))
//		printf("kk\n");
//	else
//		printf("k\n");
//	return 0;
//}

//int  my_strlen(char arr[])  //求字符串长度
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		 return 0;
//}
//int main()
//{
//	int len = 0;
//	char arr[10]="hollew";
//	//scanf("%s",arr); //用%s输入字符串要给定数组大小
//	len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//void print(int num)
//{
//	printf("%d ", num % 10);//逆序打印每一位数
//	if (num / 10 )
//	{
//		
//		print(num / 10);
//	}
//	//printf("%d ",num%10);  //顺序打印每一位数
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//void menu()  //猜数字游戏
//{
//	printf("***********************\n");
//	printf("***1.play   0.exit  ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int guess=0,num=0;
//	srand((unsigned int) time(NULL));
//	num = rand() % 10;
//	while (1)
//	{
//		printf("请猜一个数：");
//		scanf("%d",&guess);
//		printf("\n");
//		if (num == guess)
//		{
//			printf("猜对了\n");
//			break;
//		}
//		else if (num<guess)
//		{
//			printf("猜大了\n");
//		}
//		else if (num >guess)
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu(); //设置开始界面
//		printf("请选择\n");
//		scanf("%d",&input);
//		if (1 == input)
//			game();
//	} while (input);
//	return 0;
//}
//
// 
//int main()
//{
//	int a = 0,i=0;
//	int Sn = 0;
//	scanf("%d",&a);
//	for (i = 0; i <=5; i++)
//	{
//		
//		Sn = Sn + a;  //求和
//		a = a * 10 + 2; //求每一个数：前一个数*10+2
//	}
//	printf("%d ",Sn);
//	return 0;
//}
// 
// 
//int main(void) //水仙花
//{
//	int g = 0,s=0,b=0,i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		g = i % 10;
//		s = (i / 10) % 10;
//		b = i / 100;
//		if (i == b * b * b + s * s * s + g * g * g)
//			printf("%d ",i);
//	}
//	return 0;
//}

//int main(void)//输出菱形
//{
//	int i = 0, j = 0,line=0,half=0;
//	scanf("%d",&line);
//	half = line / 2;
//	for (i = 0; i <half; i++)//上半部分
//	{
//		for (j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++) //* 输出2n-1个（n=行数）
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = line-half; i > 0; i--)//下半部分
//	{		
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}
//int main(void) //数1-100中9的个数
//{
//	int i = 0,count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}
//int main(void) //计算 1-1/2+1/3-1/4+1/5....
//{
//	int i = 0,a=1;
//	double sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//			a = -a;
//		sum = sum+( a*1.0 / i);
//	}
//	printf("%lf",sum);
//	return 0;
//}
//int main(void) //交换数组
//{
//	int i=0,a[5] = { 1,2,3,4,5 }, b[5] = { 6,7,8,9,10 }, c[5] = {0};
//	for (i = 0; i < 5; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	
//	return 0;
//}
// 
//int main(void)//最大公约数：辗转相除法 大数对小数取模为零时，那个小数就是公约数
//{
//	int a = 13, b = 26,temp=0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	while (temp=(a%b))
//	{
//		a = b;
//		b = temp;
//	}
//	printf("%d",b);
//
//	return 0;
//}
//int main(void)  //从大到小排序：先找最大的放到第一个，再找次一个大的放第二个（冒泡法）
//{
//	int a = 11, b = 6, c = 3,temp=0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
//int main(void) //求最大值
//{
//	int a[] = { 1,3,5,2,9,7,8,10,4,6 };
//	int i=0;
//	int max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("%d",max);
//	return 0;
//}
//int main(void)
//{
//	int a = 2, b = 4;
//	//int temp = 0;  //交换两数
//	//printf("%d  %d\n",a, b);
//	//temp = a;
//	//a = b;
//	//b = temp;
//	//printf("%d  %d\n",a,b);
//
//	//不用中间变量交换两数
//	a = a ^ b; //a = 010 ^100 = 110
//	b = b ^ a;//b= 100^110 = 010 = 2
//	a = a ^ b;//a=110^010 = 100 = 6
//	printf("%d  %d\n", a, b);
//	return 0;
//}
//int main(void) // 求闰年
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	/*	if ((year % 4 == 0) && (year % 100 != 0))
//			printf("%d是闰年\n", year);
//		if (0 == year % 400)
//			printf("%d是闰年\n", year);*/
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (0 == year % 400))
//			printf("%d是闰年\n", year);
//	}
//	return 0;
//}
//int main(void) //输出乘法口诀表
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++) //九行
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d=%-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main( void ) //打印素数：只有一和自己本身
//{
//	int i = 0, n = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i <=sqrt( n ); i++) //  i < n
//		{
//			if (n % i == 0)
//				break;
//		}
//		if(i>=sqrt(n))             // i >= n
//	    	printf("%d\n",n);
//	}
//	return 0;
//}

////计算阶乘和
//int main( void )
//{
//	int n = 0,sum=1,i=0,sum2=0;
////	scanf("%d",&n);
//	for (n = 1; n <= 3; n++)
//	{
//		//sum = 1;  //每次计算阶乘前要初始化为 1 ，否则 sum 值为上次计算的值（前一个数的阶乘）
//		//for (i = 1; i <=n; i++)
//		//{
//		//    sum = sum * i;
//		//}
//		sum = sum * n;
//		sum2 = sum2 + sum;
//	}
//	
//	printf("%d!=%d",n-1,sum2);
//	return 0;
//}
