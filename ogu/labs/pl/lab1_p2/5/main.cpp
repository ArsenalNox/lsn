#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 5
 * Вычислить двухзначное число, по введённому четырёхзначному число
 * получаемое зачёркиванием у исходного числа цифр разрядов десятков и сотен
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    
    sum = number % 10  + (number/1000) % 10 * 10;
    
    cout << "Новое число: " << sum << "\n";

    return 0;
}
