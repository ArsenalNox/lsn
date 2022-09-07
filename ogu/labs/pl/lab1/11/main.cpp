#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 11
 * Найти объём и площадь поверхности шара по его радиусу
 */

int main(){
    double inputs[1];
    string labels[1] = {"r"};
    double v;
    double s;
    
    cout << "Введите диаметр круга " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    v = 4.0/3.0*M_PI*pow(inputs[0], 3);
    s = 4*(M_PI*pow(inputs[0], 2));

    cout << "Объём шара равен: " << v << "\n";
    cout << "Площадь шара равна: " << s << "\n";

    return 0;
}
