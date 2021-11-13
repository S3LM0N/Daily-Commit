#include <stdio.h>

int main(void)
{
	int Loop_Num;
	
	scanf_s("%d", &Loop_Num);
	int Info[50][2];
	int Rank = 0;
	for (int i = 0; i < Loop_Num; i++) { scanf_s("%d %d", &Info[i][0], &Info[i][1]); }
	for (int i = 0; i < Loop_Num; i++) {
		Rank = 0;
		for (int j = 0; j < Loop_Num; j++) {
			if (Info[i][0] < Info[j][0] && Info[i][1] < Info[j][1]) Rank ++;
		}
		Rank++;
		printf("%d", Rank);
	}
	
	return 0;
}
