#include<stdio.h>
int main(void)
{
	int TestCase, N, M;
	scanf_s("%d", &TestCase);
	int* Output_Array = malloc(sizeof(int) * TestCase);
	for (int i = 0; i < TestCase; i++)
	{
		int Case_Num = 1;
		scanf_s("%d %d", &N, &M);
		for (int j = 0; j < N; j++)
		{
			Case_Num *= M - j;
			Case_Num /= 1 + j;
		}
		Output_Array[i] = Case_Num;
	}
	for (int z = 0; z < TestCase; z++) {
		printf("%d\n", Output_Array[z]);
	}
}
