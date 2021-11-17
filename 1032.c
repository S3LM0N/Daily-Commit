#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int Loop_Num;
	scanf_s("%d", &Loop_Num);
    char String_Array[50][51] = {0};
    char Output[51];

    for (int i = 0; i < Loop_Num; i++) {
        scanf_s("%s", String_Array[i], sizeof(String_Array[i]));
    }

    for (int i = 0; String_Array[0][i] != '\0'; i++) {
        Output[i] = String_Array[0][i];
    }

    int Lenth = strlen(String_Array[0]);

    for (int i = 0; i < Lenth; i++)
    {
        for (int j = 0; j < Loop_Num - 1; j++)
        {
            if (String_Array[j][i] != String_Array[j + 1][i])
            {
                Output[i] = '?';
                break;
            }
        }
    }

    for (int j = Lenth; j < 51; j++) Output[j] = '\0';


    printf("%s", Output);

	return 0;
}
