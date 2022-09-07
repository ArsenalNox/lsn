#include <cmath>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 10
 * Найти перимтр и площадь круга по введенному диаметру
 */

int main(){
    double inputs[1];
    string labels[1] = {"d"};
    double p;
    double s;
    
    cout << "Введите диаметр круга " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    p = inputs[0]*M_PI;
    s = (M_PI*pow(inputs[0], 2))/4;

    cout << "Периметр круга равен: " << p << "\n";
    cout << "Площадь круга равна: " << s << "\n";

    return 0;
}
