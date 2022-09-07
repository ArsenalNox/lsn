#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 6
 * Найти площадь трапеции по ее высоте и двум основаням
 */

int main(){
    double inputs[3];
    double d;

    string labels[3] = {"a", "b", "h"};
    
    cout << "Введите основание " << labels[0] << '\n';
    inputs[0] = get_user_double_input();

    cout << "Введите основание " << labels[1] << '\n';
    inputs[1] = get_user_double_input();

    cout << "Введите высоту " << labels[2] << '\n';
    inputs[2] = get_user_double_input();


    d = ((inputs[0] + inputs[1])/2) * inputs[2];
    
    cout << "Площадь равна: " << d << "\n";

    return 0;
}
