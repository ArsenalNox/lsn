#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 12
 * найти объём цилиндра по его высоте и радиусу основания
 */

int main(){
    double inputs[2];
    string labels[2] = {"r", "h"};
    double v;
    double s;
    
    cout << "Введите радиус основания цилиндра " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    cout << "Высоту основания цилиндра " << labels[1] << '\n';
    inputs[1] = get_user_double_input();

    v = M_PI*pow(inputs[0], 2)*inputs[1];

    cout << "Объём цилиндра равен: " << v << "\n";

    return 0;
}
