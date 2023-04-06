#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <stdio.h>
#include<assert.h>

void* my_memcpy(int* dest, const void* src, size_t count)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
		int i = 0;
	while (i--)
	{
		*(char)dest = *(char)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
my_mrmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (count--)
	{
		(char)dest = *(char)src;
		++(char*)dest;
		++(char*)src;
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	return 0;
}