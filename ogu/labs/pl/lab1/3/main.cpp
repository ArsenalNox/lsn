#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 3 
 * Вычислить объём прямоугольного параллелепипеда по 
 * его трём смежным рёбрам
 */

int main(){
    double inputs[3];
    string labels[3] = {"A", "B", "C"};
    
    for (int i = 0; i<3; i++) {
        cout << "Введите ребро " << labels[i] << '\n';
        inputs[i] = get_user_double_input();
    }

    double d = inputs[0] * inputs[1] * inputs[2];
    
    cout << "Resulting volume is: " << d << "\n";

    return 0;
}
