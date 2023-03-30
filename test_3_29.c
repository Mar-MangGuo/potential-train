#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//
//
//	return 0;
//}
//int main()
//{
//	/*int a = 0;
//	printf("%d\n", ~a);*/
//	int a = 11;
//	a = a|(1 << 2);
//	printf("%d\n", a);
//	a=a& (~(1 << 2));
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*printf("%d\n",++a);*/
//	printf("%d\n",a++);
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 3;
//	int c = a && b;
//
//
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    /*i = a++ && ++b && d++;*/
//    i = a++||++b||d++;
//    printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//    return 0;
//}

//int main()
//{
//	int a, b;
//	a = 5;
//	b = (a < 6) ? 1 : 2;
//	printf("%d\n%d\n", a,b);
//
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "zhang",20,"2200418" };
//	struct Stu* ps = &s1;
//	printf("%s\n%d\n%s\n", s1.name, s1.age, s1.id);
//	printf("%s\n", ps->name);
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//	printf("%d\n", c);
//	
//	return 0;  
//}

#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 1, i <= 12, i++)
//	{
//		*p++ = i;
//	}
//		
//		
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = NULL;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d", *p); 
//		p += 2;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[]=""
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int righr = sz - 1;
//	while (left<righr)
//	{
//		int tmp = 0;
//		arr[left] = arr[righr];
//		arr[righr] = tmp;
//		left++;
//		righr++;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 5,4,3,2,1 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for ( i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//		printf("\n%d ", arr2[i]);
//	}
//
//	return 0;
//
//}
//int count_bit(int n)
//{
//	int count = 0;
//	/*int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1))
//		count++;
//	}*/
//	while (n)
//	{
//		n = n & (n - 1); 
//		count++;
//	}
//	
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit(a);
//	printf("count=%d", count);
//	return 0;
//}
//int get_diff(int x, int y)
//{
//	int i = 0;
//	int tmp = x ^ y;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		i++;
//	}
//
//	return i;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &m, &n);
//	int a=get_diff(m, n);
//	printf("a=%d\n", a);
//	return 0;
//}

//void print(int x)
//{
//	int i = 0;
//	for ( i = 30; i >=0 ; i-=2)
//	{
//		printf("%d", (x >> 1) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print(int*p,)
//int main()
//{
//	int arr = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print("arr,sz");
//	return 0;
//}
//
//void print(int n)
//{
//	int i = 0;
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",& n);
//	print(n);
//	return 0;
//}

//void reverse_string(int arr,int sz)
//{
//	int left = 0;
//	int righr = sz-1;
//	int 
//}
//int main()
//{
//	char arr[] = "abcdef";
//	sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	return 0;
//}
//int DigitSun(int )
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSun(num);
//	printf("ret=%d\n", num);
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[10];
//}Stu;
//void print(Stu tmp)
//{
//	printf("name= %s\n", tmp.name);
//	printf("age=%d\n", tmp.age);
//	printf("tele=%s\n", tmp.tele);
//	printf("sex=%s\n ", tmp.sex);
//}
//void print2(Stu* pc)
//{
//	printf("name= %s\n", pc->name);
//	printf("age=%d\n", pc->age);
//	printf("tele=%s\n", pc->tele);
//	printf("sex=%s\n ", pc->sex);
//
//}
//int main()
//{
//	Stu s = { "zhangsan",20,"1235656","male" };
//	print(s);
//	print2(&s);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 0; i <100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++;)
//		{
//			;
//		}
//	}
//}
#include<assert.h>
//
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//		while (*dest++ = *src++)
//					{
//						;
//					}
//		return ret;
//}
//int main()
//{
//	char arr[] = "#############";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr,arr2));
//	return 0;
//}
//my_strlen(const char* str)
//{
//	int count = 0;
//	assert(*str != '\0');
//	while (true)
//	{
//
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_stren(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

int main()
{


	return 0;
}