#include <stdio.h>

int main(void)
{
	int Min, Max, SqrNum = 1, Count = 0;
	scanf_s("%d %d", &Min, & Max);
	do {
		SqrNum++;
		for (int i = Min; i <= Max; i++) {
			if (i % (SqrNum * SqrNum) == 0) Count++;
		}
	} while ((SqrNum * SqrNum) < Max);
	printf("%d", Max - Min + 1 -Count);
	return 0;
}
