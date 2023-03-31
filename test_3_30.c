#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int a = 0;
//	char* p =(char*) & a;
//	int ret = check_sys();
//	if (ret==1)
//	{
//		printf("小端");
//	}
//	else if(ret==0)
//	{
//		printf("daduan");
//	}
//	return 0;
//}
//
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
////}
//
//int i=-20;
//unsigned  int  j = 10;
//printf("%d\n", i + j);
#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}

//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 9;
//    float* pFloat = (float*)&n;
//    printf("n的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//    *pFloat = 9.0;
//    printf("num的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//    return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "acbdef";*/
//	char* p1[] = {"abcdef"};
//	char* p2[] = {"abcdef"};
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
	//if (arr1==arr2)
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");
	//}

//	//return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa+i));
//	}
//	return 0;
//}

//void test(int( * arr)[5])
//{
//
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void Print(char* x)
//{
//	printf("%s\n",x);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}

//int main()
//{
//	int(*pa)(int, int) = &Add;
//	int(*parr[4])(int,int)={Add,Mull,cheng,chu}
//
//	return 0;
//}
//
//char* my_strcopy(char* dest, const char* src);
//char* (*pf)(char*, const char*) = &my_strcopy;
//char* (*pfrr[4])(char*, const char*) = { my_strcopy };

int Add(int x, int y)
{
	
	return x + y;
}
int Mul(int x, int y)
{
	
	return x - y;
}
int Div(int x, int y)
{
	
	return x / y;
}
int Tim(int x, int y)
{
	
	return x * y;
}
void meau()
{
	printf("****************************\n");
	printf("**1.加法      2.减法       **\n");
	printf("**3.乘法      4.除法       **\n");
	printf("****** 0.退出          ******\n");

}
//main()
//{
//	int i = 0;
//	do
//	{
//		int z = 0;
//		meau();
//		scanf("%d", &i);
//		switch (i)
//		{
//		case(1):
//			{
//				int x, y;
//				printf("请输入两个数：");
//				scanf("%d%d", &x, &y);
//				z=Add(x, y);
//				printf("结果为%d", z);
//				break;
//			}
//			case(2):
//			{
//				int x, y;
//				printf("请输入两个数：");
//					scanf("%d%d", &x, &y);
//				z = Mul(x, y);
//				printf("结果为%d", z);
//				break;
//			}
//			case(3):
//			{
//				int x, y;
//				printf("请输入两个数：");
//					scanf("%d%d", &x, &y);
//				z = Tim(x, y);
//				printf("结果为%d", z);
//				break;
//			}
//			case(4):
//			{
//				int x, y;
//				printf("请输入两个数：");
//					scanf("%d%d", &x, &y);
//				z = Div(x, y);
//				printf("结果为%d", z);
//				break;
//			}
//			case(0):
//			{
//				break;
//			}
//		default:
//			printf("请重新输入");
//			break;
//		}
//	} while (i);
//
//	return 0;
//}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*parr[5])(int, int) = { 0;Add,Mul,Tim,Div }
		do
		{
			meau();
			printf("qingxuanze");
			scanf("%d", &i);
		} while (true);
	return 0;
}