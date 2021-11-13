#include <stdio.h>
#include <string.h> 
#define STACK_SIZE 50


int Stack[STACK_SIZE];
int Stack_Count = 0;

void Push(int Num) {
	Stack[Stack_Count] = Num;
	Stack_Count++;
}

int Pop() {
	if (Stack_Count <= 0) return -1;
	else {
		Stack_Count--;
		return Stack[Stack_Count];
		
	}
}

int Size() {
	return Stack_Count;
}

int Empty() {
	if (Stack_Count == 0) return 1;
	if (Stack_Count > 0) return 0;
}

int Top() {
	if (Stack_Count <= 0) return -1;
	else {
		return Stack[Stack_Count - 1];
	}
}

int main(void)
{
	int Loop_Num, Num;
	char Order[10];
	scanf_s("%d", &Loop_Num);
	int* Output_Array = malloc(sizeof(int) * Loop_Num);

	for (int i = 0; i < Loop_Num; i++) {
		scanf_s("%s", &Order, sizeof(Order));
		if (strcmp(Order, "push") == 0) {
			scanf_s("%d", &Num);
			Push(Num);
			i--;
			Loop_Num--;
		}
		else if (strcmp(Order, "pop") == 0) {
			Output_Array[i] = Pop();
		}
		else if (strcmp(Order, "top") == 0) {
			Output_Array[i] = Top();
		}
		else if (strcmp(Order, "size") == 0) {
			Output_Array[i] = Size();
		}
		else if (strcmp(Order, "empty") == 0) {
			Output_Array[i] = Empty();
		}
	}
	for (int i = 0; i < Loop_Num; i++) {
		printf("%d\n", Output_Array[i]);
	}
	return 0;
}
