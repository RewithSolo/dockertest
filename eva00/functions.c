#include "../pilot/functions.h"

// Ввод данных
int input(float *height, float *weight)
{
    printf("Введите рост и вес: ");
    if(scanf("%f %f", height, weight) != 2)
        return ERR_INPUT;
    else if (*height <= 0 && *weight <= 0)
        return ERR_CONTENT;
    else
        return OK;

}
// Вычисление ежедневной нормы воды для человека
void calculate_water(float weight, float *water)
{
    *water = (weight / 450) * 14;
}

// Вычисление индекса массы тела
float calculate_imt(float height, float weight)
{
    float heightinmetres = height/100;
    float imt = weight / pow(heightinmetres, 2);
    return imt;
}
