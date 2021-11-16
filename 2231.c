#include <stdio.h>
#include <math.h>


int GetDigit(int Num) {
	int Digit = 1;
	while (Num > 9) {
		Num /= 10;
		Digit++;
	}
	return Digit;
}


int GetSumDecomposition(int Num) {
	int Num_Sum = 0;
	int Num_Cnt = 0;
	int Num_Digit = GetDigit(Num);
	for (int i = 0; i < Num_Digit; i++) {
		Num_Sum += (Num % (int)(pow(10, Num_Digit - i)) - Num % (int)(pow(10, Num_Digit - (i + 1)))) / pow(10, Num_Digit - i - 1);
	}
	Num_Sum += Num;
	return Num_Sum;
}

int GetMinConstructor(int Num) {return Num - GetDigit(Num) * 9;}
int GetMaxConstructor(int Num) {return Num;}


int main(void)
{
	unsigned int Input, Input_Digit = 1, Input_Temp, Input_Sum = 0;
	unsigned int Output, Output_Max, Output_Min, Output_Cnt;
	scanf_s("%d", &Input);
	int Constructor_Min = GetMinConstructor(Input);
	int Constructor_Max = GetMaxConstructor(Input);
	for (Constructor_Min; Constructor_Min < Constructor_Max; Constructor_Min++) {
		if (GetSumDecomposition(Constructor_Min) == Input) { break; }
	}
	printf("%d\n", Constructor_Min);

}
