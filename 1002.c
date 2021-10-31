
#include <stdio.h>
#include <math.h>

int* GetRange(int X_1, int Y_1, int R_1, int X_2, int Y_2, int R_2)
{
	int Range_1_R = X_1 + R_1;
	int Range_1_L = X_1 - R_1;
	int Range_1_U = Y_1 + R_1;
	int Range_1_D = Y_1 - R_1;

	int Range_2_R = X_2 + R_2;
	int Range_2_L = X_2 - R_2;
	int Range_2_U = Y_2 + R_2;
	int Range_2_D = Y_2 - R_2;

	int Range_R, Range_L, Range_U, Range_D;

	if (Range_1_R < Range_2_R) { Range_R = Range_2_R; }
	else { Range_R = Range_1_R; }
	if (Range_1_L < Range_2_L) { Range_L = Range_1_L; }
	else { Range_L = Range_2_L; }
	if (Range_1_U < Range_2_U) { Range_U = Range_2_U; }
	else { Range_U = Range_1_U; }
	if (Range_1_D < Range_2_D) { Range_D = Range_1_D; }
	else { Range_D = Range_2_D; }

	int Return_Array[4] = { Range_R, Range_L, Range_U, Range_D };
	return Return_Array;
}

int SearchCoordinate(double UP, double DOWN, double LEFT, double RIGHT, double X_1, double X_2, double Y_1, double Y_2, double R_1, double R_2)
{	
	double Y, X, X_1_Diff, X_2_Diff, Y_1_Diff, Y_2_Diff, _1_Range, _2_Range;
	double Return_1_X, Return_1_Y, Return_2_X, Return_2_Y, Return_Count = 0;
	if (X_1 == X_2 && Y_1 == Y_2 && R_1 == R_2) return -1;
	for (Y = DOWN; Y < UP+1; Y++) {
		for (X = LEFT; X < RIGHT + 1; X++) {
			X_1_Diff = X_1 - X;
			X_2_Diff = X_2 - X;
			Y_1_Diff = Y_1 - Y;
			Y_2_Diff = Y_2 - Y;
			_1_Range = sqrt(X_1_Diff * X_1_Diff + Y_1_Diff * Y_1_Diff);
			_2_Range = sqrt(X_2_Diff * X_2_Diff + Y_2_Diff * Y_2_Diff);
			if (_1_Range == R_1 && _2_Range == R_2) {
				Return_Count++;
			}
		}
	}
	return Return_Count;
}

int main(void)
{
	int Loop_Num, Coordinate_Array[10];
	int Case_Num = 0;
	int X_1, Y_1, R_1;
	int X_2, Y_2, R_2;
	int i, j;
	scanf_s("%d", &Loop_Num);
	for (i = 0; i < Loop_Num; i++) {
		scanf_s("%d %d %d %d %d %d", &X_1, &Y_1, &R_1, &X_2, &Y_2, &R_2);
		int* Range_Array = GetRange(X_1, Y_1, R_1, X_2, Y_2, R_2);
		int Coordinate_Num = SearchCoordinate(Range_Array[2], Range_Array[3], Range_Array[1], Range_Array[0], X_1, X_2, Y_1, Y_2, R_1, R_2);
		Coordinate_Array[i] = Coordinate_Num;
	}
	for (j = 0; j < i; j++) {printf("%d\n", Coordinate_Array[j]);}
	return 0;
}
