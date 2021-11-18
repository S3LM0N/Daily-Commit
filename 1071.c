#include <stdio.h>

void Sort(int Num[], int n)
{
	int Temp, Flag;
	for (int j = 0; j < n; j++) {
		for (int i = n - 1; i > -1; i--) {
			if (Num[i] + 1 == Num[i + 1]) {
				int z;
				for (z = 0; z < n; z++) {
					if (Num[z] == Num[i] + 2) {
						Flag = 1;
						break;
					}
					else Flag = 0;
				}
				if (Flag == 1) {
					Temp = Num[i + 1];
					Num[i + 1] = Num[z];
					Num[z] = Temp;
					Temp = Num[i + 2];
					Num[i + 2] = Num[z];
					Num[z] = Temp;
				}
				else {
					Temp = Num[i + 1];
					Num[i + 1] = Num[i];
					Num[i] = Temp;
				}
			}
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
	

	Sort(Num_Array, Loop_Num);

	for (int i = 0; i < Loop_Num; i++) printf("%d ", Num_Array[i]);

	free(Num_Array);
	return 0;
}
