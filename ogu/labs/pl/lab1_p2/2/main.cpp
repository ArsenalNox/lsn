#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 2
 * Найти сумму цифр введённого трёхзначного числа
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    
    sum = number % 10 + (number/10) % 10 + (number/100) % 10;
    
    cout << "Сумма цифр равна: " << sum << "\n";

    return 0;
}
