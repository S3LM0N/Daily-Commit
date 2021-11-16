
#include <stdio.h>

int main(void)
{
	int Num, Result = 1;
	scanf_s("%d", &Num);
	for (int i = 1; i < Num + 1; i++) {
		Result *= i;
	}
	printf("%d", Result);
}
