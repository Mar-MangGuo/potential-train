#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int FindNum(int arr[][3], int k, int* row, int *col)
//{
//	int x = 0;
//	int y = *col - 1;
//
//	while (x <= *row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//	
//			return 1;
//		}
//	}
//return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret==1)
//	{
//		printf("ур╣╫ак\n");
//		printf("xiaobiaoshi %d %d", x, y);
//	}
//	else
//	{
//		printf("zhaobudao\n");
//	}
//	return 0;
//}

#include <string.h>
#include<assert.h>
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//		while (*str1==*str2)
//		{
//			if (*str1 =='\0')
//			{
//				return 0;
//			}
//			str1++;
//			str2++;
//		}
//	if (*str1>*str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//
//	printf("%d\n", ret);
//	return 0;
//}
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
		char* cur = p1;
	if (*s2 == '\0')
	{
		return 0;
	}
	while (*s1)
	{
		while( (*s1 !='\0')&&( *s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 =='\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}


int main()
{
	char* p1 = "abcde";
	char* p2 = "abc";

	char* ret = my_strstr(p1, p2);
	return 0;
}