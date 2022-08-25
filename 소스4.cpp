/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10];
	int n = 0;

	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;

	}

	for (int j = 0; j < 10; j++)
	{
		int c = 0;
		for (int k = 0; k < j; k++)
		{
			if (arr[j] == arr[k])
				c++;

		}
		if (c == 0)
			n++;


	}
	printf("%d", n);
	
	return 0;
}*/