
#include <stdio.h>

int Num_1 = 0, Num_0 = 0;
int Fibonacci(int N) {
	if (N == 0) {
		Num_0++;
		return;
	}
	else if (N == 1) {
		Num_1++;
		return;
	}
	else {
		return Fibonacci(N-1) + Fibonacci(N-2);
	}
}

int main(void)
{
	int Loop_Num, Input, Output_Array[100];
	int i, j;

	scanf_s("%d", &Loop_Num);
	for (i = 0; i < Loop_Num*2; i = i+ 2) {
		scanf_s("%d",&Input);
		Fibonacci(Input);
		Output_Array[i]   = Num_0; 
		Output_Array[i+1] = Num_1;
		Num_0 = 0;
		Num_1 = 0;
	}
	for (j = 0; j < i; j  = j +2) {
		printf("%d %d\n", Output_Array[j], Output_Array[j+1]);}
	return 0;
}
