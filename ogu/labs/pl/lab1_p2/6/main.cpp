#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 6
 * По введённому четырёхзначному числу вычислить двухзначное число
 * получаемое зачёркиванием разрядов единиц и тысяч
 */

int main(){
    int number;
    int sum;
    double p;
    double s;
    
    cout << "Введите число" << '\n';
    number = int(get_user_double_input());
    
    sum = (number/10) % 10  + (number/100) % 10 * 10;
    
    cout << "Новое число: " << sum << "\n";

    return 0;
}
