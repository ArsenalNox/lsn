#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 7
 * Поменять местами разряды десятков и сотен у 4-ёх значного числа
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    
    sum = number % 10 + (number/10) % 10 * 100 + (number/100) % 10 * 10  + (number/1000) % 10 * 1000 ;
    
    cout << "Новое число: " << sum << "\n";

    return 0;
}
