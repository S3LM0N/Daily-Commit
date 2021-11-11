#include <stdio.h>
int main(void)
{
	int N_, M, Diff = 0, Num = 0;
	scanf_s("%d %d", &N_, &M); Diff = M;
	int* N = malloc(sizeof(int) * N_);
	for (int i = 0; i < N_; i++) {scanf_s(" %d", &N[i]);}
	for (int i = 0; i < N_; i++) {
		for (int j = 0; j < N_; j++) {
			for (int k = 0; k < N_; k++) {
				if (N[i] != N[j] && 
					N[i] != N[k] && 
					N[k] != N[j] &&
					N[i] + N[j] + N[k] <= M &&
					M - (N[i] + N[j] + N[k]) < Diff){
						Diff = M - (N[i] + N[j] + N[k]);
						Num = (N[i] + N[j] + N[k]);
				}
			}
		}
	}
	printf("%d", Num);
	return 0;
}
