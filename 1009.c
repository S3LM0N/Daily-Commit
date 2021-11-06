#include <stdio.h>
#include <math.h>

int main(void)
{
	int TestCase;
	scanf_s("%d", &TestCase);
	int* Output_Array = malloc(sizeof(int) * TestCase);
	for (int t = 0; t < TestCase; t++) {
		int A, B;
		scanf_s("%d %d", &A, &B);
		while (A > 10) { A %= 10; }
		while (B > 10) { B %= 10; }

		int Data = pow(A, B);
		while (Data > 10) {
			Data %= 10;
		}
		Output_Array[t] = Data;
	}	
	for (int z = 0; z < TestCase; z++) {
		printf("%d\n", Output_Array[z]);
	}
	return 0;
}
