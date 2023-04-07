#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	printf("hehe ");
//	Sleep(10000);
//	printf("hehe ");
//}

//int main()
//{
//
//	FILE* pf=fopen("test.txt", "r");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(error));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.test", "w");
//
//	return 0;
//}
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(ERROR));
//	}
//	fputc('b', pf);
//	fputc('b', pf);
//	int ch=fgetc(pf);
//	printf("%s", pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.text", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//fgets(buf, 1024, pf);
//	//puts(buf);
//	fputs("hello \n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//
//};
//int main()
//{
//	/*char buf[1024];
//	fgets*/
//	struct S s = { 0 };
//	/*FILE* pf = fopen("test.txt", "r");*/
//	//if (pf==NULL)
//	//{
//	//	return 0;
//	//}
//	/*fprintf(pf, "%d %f %s", s.n, s.score, s.arr);*/
//	fscanf(stdin,"%d%f%s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout,"%d %.1f %s", s.n, s.score, s.arr);
//	/*fclose(pf);*/
//	/*pf = NULL;*/
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double scorce;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",18,56.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	(-1)
//	/*feof();*/
//	FILE* pf = fopen("test.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10];
//	for (  i = 0; i <10; i++)
//	{
//		arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 11;

	int max = MAX(a++, b++);
	printf("%d\n", max);
//#define DEBUG
#ifndef  DEBUG
	printf("%d\n", a);
#endif // DEBUG
	printf("%d\n", b);
	return 0;
}