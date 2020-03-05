#include "all.h"

float calc_bmi(float height, float weight)
{
    return weight / (height * height);
}

int main()
{
    float bmi;
    float height;
    float weight;
    std::cin >> height;
    std::cin >> weight;
    bmi = calc_bmi(height / 100, weight);

    std::cout << bmi << "\n"s;
}
