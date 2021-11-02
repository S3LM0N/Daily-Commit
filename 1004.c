
#include <stdio.h>
#include <math.h>

int Coordinate_Num;


int SearchCoordinate(int Start_X, int Start_Y, int Arrive_X, int Arrive_Y, int Planet_X, int Planet_Y, int R)
{
    int X, Y;// Range_Array[2], Range_Array[3], Range_Array[1], Range_Array[0]

    int Diff_X_Planet, Diff_Y_Planet;
    int Diff_X_Arrive, Diff_Y_Arrive;
    int Diff_X_Start, Diff_Y_Start;

    int Range_R = Planet_X + R;
    int Range_L = Planet_X - R;
    int Range_U = Planet_Y + R;
    int Range_D = Planet_Y - R;

    for (Y = Range_D; Y < Range_U + 1; Y++) {
        for (X = Range_L; X < Range_R + 1; X++) {

            Diff_X_Planet = X - Planet_X;
            Diff_Y_Planet = Y - Planet_Y;

            Diff_X_Arrive = Planet_X - Arrive_X;
            Diff_Y_Arrive = Planet_Y - Arrive_Y;

            Diff_X_Start = Planet_X - Start_X;
            Diff_Y_Start = Planet_Y - Start_Y;

            int Range_PlanetCenter = sqrt(Diff_X_Planet * Diff_X_Planet - Diff_Y_Planet * Diff_Y_Planet);

            int Range_PlanetArrive = sqrt(Diff_X_Arrive * Diff_X_Arrive - Diff_Y_Arrive * Diff_Y_Arrive);

            int Range_PlanetStart = sqrt(Diff_X_Start * Diff_X_Start - Diff_Y_Start * Diff_Y_Start);

            if (Range_PlanetCenter < R) {
                if (Start_X == X) {
                    if (Start_Y == Y) {
                        if (Range_PlanetArrive < R) {
                            Coordinate_Num = Coordinate_Num;
                        }
                        else {
                            Coordinate_Num++;
                        }
                    }
                }
                else if (Start_Y == Y) {
                    if (Start_X == X) {
                        if (Range_PlanetArrive < R) {
                            Coordinate_Num = Coordinate_Num;
                        }
                        else {
                            Coordinate_Num++;
                        }
                    }
                }
                if (Arrive_X == X) {
                    if (Arrive_Y == Y) {
                        if (Range_PlanetStart < R) {
                            Coordinate_Num = Coordinate_Num;
                        }
                        else {
                            Coordinate_Num++;
                        }
                    }
                }
                else if (Arrive_Y == Y) {
                    if (Arrive_X == X) {
                        if (Range_PlanetStart < R) {
                            Coordinate_Num = Coordinate_Num;
                        }
                        else {
                            Coordinate_Num++;
                        }
                    }
                }
            }
        }
    }
}
int main(void)
{
    int Loop_Num_Case, Loop_Num_Planet;
    int Start_X, Start_Y, Arrive_X, Arrive_Y;
    int Planet_X, Planet_Y, Planet_R;
    int i, j;
    int Result[10];

    scanf_s("%d", &Loop_Num_Case);
    for (i = 0; i < Loop_Num_Case; i = i++) {
        Coordinate_Num = 0;
        scanf_s("%d %d %d %d", &Start_X, &Start_Y, &Arrive_X, &Arrive_Y);
        scanf_s("%d", &Loop_Num_Planet);
        for (j = 0; j < Loop_Num_Planet; j = j++) {
            scanf_s("%d %d %d", &Planet_X, &Planet_Y, &Planet_R);
            SearchCoordinate(Start_X, Start_Y, Arrive_X, Arrive_Y, Planet_X, Planet_Y, Planet_R);
        }
        Result[i] = Coordinate_Num;
    }
    for (j = 0; j < Loop_Num_Case; j++) {
        printf("%d\n", Result[j]);
    }
    return 0;
}
