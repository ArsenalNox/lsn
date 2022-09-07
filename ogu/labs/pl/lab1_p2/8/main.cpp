#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 8
 * Поменять разряды единиц и тысяч
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    
    sum = number % 10 * 1000 + (number/10) % 10 * 10 + (number/100) % 10 * 100  + (number/1000) % 10;
    
    cout << "Новое число: " << sum << "\n";

    return 0;
}
