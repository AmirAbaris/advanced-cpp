#include <iostream>
#include <cstring>
using namespace std;

struct studentStruct
{
    char name[30];
    int id;
    float grades[20];
    float averageGrade;
};

int main()
{
    // read 2*2 martris
    int firstArr[2][3];
    int secArr[3][4];
    int resultOfMul = 0;

    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> firstArr[col][row];
        }
    }
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 4; row++)
        {
            cin >> secArr[col][row];
        }
    }

    // calc the inner mul of it
    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 4; row++)
        {
            for (int k = 0; k < 3; k++)
            {
                resultOfMul += resultOfMul[col][row] + (firstArr[col][k] * secArr[k][row]);
            }
        }
    }
    return 0;
}