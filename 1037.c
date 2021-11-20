#include <stdio.h>

void Bubble(int Num[], int n)
{
	int i, j, z;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (Num[j - 1] > Num[j])
			{
				z = Num[j - 1]; 
				Num[j - 1] = Num[j];
				Num[j] = z;
			}
	}
}

int main(void)
{
	int Loop_Num; 
	int* Num_Array;	
	scanf_s("%d", &Loop_Num);
	Num_Array = calloc(Loop_Num, sizeof(int));

	for (int i = 0; i < Loop_Num; i++) scanf_s(" %d", &Num_Array[i]);
	Bubble(Num_Array, Loop_Num);	

	printf("%d ", Num_Array[0] * Num_Array[Loop_Num - 1]);

	free(Num_Array);
	return 0;
}
