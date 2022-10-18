#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Найти наименьшее из трех данных вещественных чисел.
 */

int main(){
    double a;
    double b;
    double c;
    
    cout << "Введите число A\n";
    a = get_user_double_input();

    cout << "Введите число B\n";
    b = get_user_double_input();

    cout << "Введите число C\n";
    c = get_user_double_input();

    if (a <= b && a <= c){
        cout << a << " наименьшее" << endl;
    } else if (b <= a && b <= c) {
        cout << b << " наименьшее" << endl;
    } else {
        cout << c << " наименьшее" << endl;
    }

    cout << "" << "\n";
}
