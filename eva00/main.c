#include "../pilot/functions.h"   

int main()
{   
    // in santimeters, kilograms
    float height, weight;
    float water;
    int rc = OK;

    if (!(rc = input(&height, &weight)))
    {
        calculate_water(weight, &water);
        printf("Индекс массы тела = %.1lf\n", calculate_imt(height, weight));
        printf("Ежедневная норма воды в литрах - %.3lf\n", water);
    }
    else
    {   
        printf("Oшибка ввода данных");
        return rc;
    }
    printf("this is end!");
    return OK;
}
