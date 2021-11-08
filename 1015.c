#include <stdio.h>
#include <math.h>

int main(void)
{
	int TestCase;
	scanf_s("%d", &TestCase);
	int* P = malloc(sizeof(int) * TestCase);
	int* A = malloc(sizeof(int) * TestCase);
	for (int t = 0; t < TestCase; t++) {scanf_s(" %d ", &A[t]);}
	int Min = 1000, i, j, Adress = 0;
	for (j = 0; j < TestCase; j++) {
		for (i = 0; i < TestCase; i++) {
			if (A[i] < Min) {
				Min = A[i];
				Adress = i;
			}
		}
		P[Adress] = j;
		A[Adress] = 1000;
		Min = 1000;
	}
	for (int z = 0; z < TestCase; z++) {
		printf("%d ", P[z]);
	}
	return 0;
}
