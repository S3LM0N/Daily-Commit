#include <stdio.h>
#include <math.h>

int main(void)
{
	int TestCase;
	scanf_s("%d", &TestCase);
	int * Output_Array = malloc(sizeof(int) * TestCase);
	for (int t = 0; t < TestCase; t++) {
		long long X, Y, A, D, A_s;
		scanf_s("%d %d", &X, &Y);
		int Data;
		D = Y - X;
		A = (int)sqrt(D);
		A_s = pow(A, 2);

		if (D == A_s) Data = 2 * A - 1;
		else if (A_s < D && D <= A_s + A) Data = 2 * A;
		else if (A_s + A < D && D < (A + 1) * (A + 1)) Data = 2 * A + 1;

		Output_Array[t] = Data;
	}	
	for (int z = 0; z < TestCase; z++) {
		printf("%d\n", Output_Array[z]);
	}
	return 0;
}
