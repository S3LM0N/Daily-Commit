#include <stdio.h>


int main(void)
{
	int Loop_Num, K, Count = 0;
	scanf_s("%d %d", &Loop_Num, &K);
	int* N = malloc(sizeof(int) * Loop_Num);
	for (int i = 0; i < Loop_Num; i++) {scanf_s("%d", &N[i]);}

	for (int i = Loop_Num; i > 0; i--) { 
		Count += K / N[i];
		K = K % N[i];
	}
	printf("%d", Count);

	free(N);
	return 0;
}
