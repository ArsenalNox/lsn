#include <cmath>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 9
 * Найти объём конуса по введённой высоте и радиусу основания
 */

int main(){
    double inputs[2];
    string labels[2] = {"r", "h"};
    double d;
    
    cout << "Введите радиус основания " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    cout << "Введите высоту " << labels[1] << '\n';
    inputs[1] = get_user_double_input();
        
    d = 1.0/3.0*M_PI * pow(inputs[0], 2) * inputs[1];
    
    cout << "Объём конуса равен: " << d << "\n";

    return 0;
}
