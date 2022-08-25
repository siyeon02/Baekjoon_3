/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, avg=0, r, s = 0;
	scanf("%d", &n);
	int arr[n];

	

	for (int i = 0; i < n; i++)
	{
		scanf("%d\n", &arr[i]);
		for (int j = 0; j <= i; j++)
		{
			
			scanf("%f", &arr[j]);
		}

		for (int l = 0; l <= arr[i]; l++)
		{
			avg += (float)arr[l] / n;
		}

		for (int k = 0; k <= arr[i]; k++)
		{
			if (arr[i] > avg)
				s = s + 1;
		}
		r = (float)s / n * 100;
		printf("%0.3f%%\n", r);

	}
	return 0;

}*/