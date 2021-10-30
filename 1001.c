 #include <stdio.h>

int SUBTRACT(int Num_1, int Num_2) {
	return Num_1 - Num_2;
}

int main(void)
{
	int Input_1, Input_2;
	scanf_s("%d %d", &Input_1, & Input_2);
	printf("%d\n", SUBTRACT(Input_1, Input_2));
}
