#include <cmath>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 8
 * Найти площадь поверхности конуса 
 * по введённой высоте и радиусу основания
 */

int main(){
    double inputs[2];
    string labels[2] = {"a", "b"};
    double d;
    
    cout << "Введите основание " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    cout << "Введите высоту " << labels[1] << '\n';
    inputs[1] = get_user_double_input();


    d = M_PI * inputs[0] 
        * (inputs[0]
            + sqrt(
                    pow(inputs[0], 2)
                    + pow(inputs[1], 2)
                )
            );
    
    cout << "Плащaдь основания равна: " << d << "\n";

    return 0;
}
