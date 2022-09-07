#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 12
 * написать программу, которая по введённому четырёхзначному числу 
 * вычисляет число, получающееся вычёркиванием цифры разряда сотен и единиц 
 * с последуюищм их прибавлением к получившемуся двухзначному числу
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    // (2+4)-(1+3)
    sum = (number % 10 + (number/100) % 10 * 10) + ((number/1000) % 10  + (number/10) % 10 * 10);
    
    cout << "Новое число: " << sum << "\n";

    return 0;
}
