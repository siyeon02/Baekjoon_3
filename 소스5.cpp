/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int max = 0;
	float sum = 0;

	scanf("%d", &n);

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		
		if (arr[i] > max)
			max == arr[i];

	}

	for (int j = 0; j < n; j++)
	{
		sum += (float)arr[j] / max * 100;

	}
	printf("%f\n", sum / n);
	return 0;

	
}*/