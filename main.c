#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void retate(char* str, int size, int k);
int main()
{
	char arr[] = "abcdef";
	int i = 0, j = 0;
	int size = sizeof(arr);
	retate(arr,size,2);
	printf("%s",arr);
	system("pause");
	return 0;
}


void retate(char* str, int size,int k)
{
	int i = 0, j = 0;
	for (i = 0;i < size - 1 - k;i++)
	{
		for (j = 0;j < k;j++)
		{
			int temp = *(str + k - j - 1);
			*(str + k - j - 1) = *(str + k - j);
			*(str + k - j) = temp;
		}
		str++;
	}

}