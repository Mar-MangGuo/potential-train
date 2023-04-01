#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz-i-1; j++)
//		{
//			if()
//		}
//	}
//
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*) e1 - *(int*) e2;
//
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,4,5,6,2,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	qsort(arr, sz, sizeof(arr[0]),cmp_int );
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for ( i = 0; i < width; i++)
//	{
//		
//	}
//}

	/*int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));
	return 0;
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));*/
	////字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	// 
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//	
//	return 0;
//}
	/*int main()
	{
		int a[5] = { 1, 2, 3, 4, 5 };
		int* ptr = (int*)(&a + 1);
		printf("%d,%d", *(a + 1), *(ptr - 1));
		return 0;
	}*/
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//#include<string.h>
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* righr = str + len - 1;
//
//	while (left<righr)
//	{
//		char tmp = *left;
//		*left = *righr;
//		*righr = tmp;
//		left++;
//		righr--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	/*int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d%d",&a,&n);
//	for ( i = 0; i < n+1; i++)
//	{
//		a = a + 2 * (10^2);
//		sum += a;
//		printf("%d\n", sum);
//	}
//	printf("%d", sum);*/
//	printf("%d", 10 ^ 5);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d",&n);
//	for ( i = 0; i < n; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < n-i-1; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d", total);
//	return 0;
//}
#include<string.h>
#include<assert.h>
void left_move(char* arr, int k)
{
	assart(arr != NULL);
	int i = 0;
	int len = strlen(arr);
	for ( i = 0; i < k; i++)
	{
		char tmp = *arr;
		int j = 0;
		for ( j = 0; j < len-1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);

	printf("%s\n", arr);
	
	return 0;
}