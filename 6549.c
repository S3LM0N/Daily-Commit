#include <stdio.h>

int main(void)
{
	while (1) {
		int Loop_Num, Many = 0, Many_ = 0;
		scanf_s("%d", &Loop_Num);
		if (Loop_Num == 0) break;
		int* Single_Array = malloc(sizeof(int) * Loop_Num);
		for (int i = 0; i < Loop_Num; i++) {scanf_s(" %d", &Single_Array[i]);}
		int Index_1 = 0, Index_2 = 0;
		for (int i = 0; i < Loop_Num; i++) {
			while (Single_Array[i] <= Single_Array[i + Index_1]) {
				Index_1++;
			}
			while (Single_Array[i] <= Single_Array[i - Index_2]) {
				Index_2++;
			}
			Many_ = Single_Array[i] * (Index_1 + Index_2 - 1);
			if (Many_ >= Many) Many = Many_;		
			printf("%d * %d = %d\n", Single_Array[i], (Index_1 + Index_2 - 1), Many_);
			Index_1 = 0;
			Index_2 = 0;
		}
		for (int i = 0; i < Loop_Num; i++) { if (Many < Single_Array[i]) Many = Single_Array[i]; }
		printf("%d\n\n", Many);
	}
	return 0;
}
