#include <stdio.h>


void Bubble(int Num[], int n)
{
	int i, j, z; 
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (Num[j - 1] > Num[j])
			{
				z = Num[j - 1];  
				Num[j - 1] = Num[j];
				Num[j] = z;
			}
	}
}

int main(void)
{
	int Loop_Num;
	scanf_s("%d", &Loop_Num);
	int* N = malloc(sizeof(int) * Loop_Num);
	for (int i = 0; i < Loop_Num; i++) {scanf_s("%d", &N[i]);}	
	Bubble(N, Loop_Num);
	int Sum = 0;
	for (int i = 0; i < Loop_Num; i++) { Sum += N[i]; }
	printf("\n\n%d\n", Sum / Loop_Num);

	printf("%d\n", N[(int)(Loop_Num / 2)]);

	int* Cnt = malloc(sizeof(int) * Loop_Num);
	int* Arr = malloc(sizeof(int) * Loop_Num);

	for (int i = 0; i < Loop_Num; i++)
	{
		int Freq = 1;
		if (N[i] == N[i + 1]) {
			while (N[i] == N[i + 1]){
				Freq++;
				i++;
			}
		}
		Cnt[i] = Freq;
	}

	int Num_Min = 0, Max_Count = 0;
	for (int i = 0; i < Loop_Num; i++) { if (Cnt[i]  > Max_Count) Max_Count = Cnt[i]; }
	for (int i = 0; i < Loop_Num; i++) { if (Cnt[i] == Max_Count) Arr[i] = N[i]; }

	Bubble(Arr, Loop_Num);
	int Arr_Empty_Count = 0;
	for (int i = 0; i < Loop_Num; i++) { if (Arr[i] == -842150451) Arr_Empty_Count++; }
	if (Loop_Num == 1) printf("%d\n", Arr[0]);
	else if (Arr[Arr_Empty_Count+1] == Arr[Arr_Empty_Count]) printf("%d\n", Arr[Arr_Empty_Count]); else printf("%d\n", Arr[Arr_Empty_Count + 1]);


	int Max= -842150451, Min = 842150451;
	for (int i = 0; i < Loop_Num; i++) { 
		if (N[i] > Max) Max = N[i]; 
		if (N[i] < Min) Min = N[i]; 
	}
	printf("%d\n", Max - Min);


	free(N);
	free(Cnt);
	free(Arr);
	return 0;
}
