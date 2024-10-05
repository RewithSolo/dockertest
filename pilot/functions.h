#ifndef FUNCTIONS_H__
#define FUNCTIONS_H__
#include "defines.h"
#include <stdio.h>
#include <math.h>

// Ввод данных
int input(float *height, float *weight);

// Вычисление ежедневной нормы воды для человека
void calculate_water(float weight, float *water);

// Вычисление индекса массы тела
float calculate_imt(float height, float weight);

#endif
