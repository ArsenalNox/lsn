#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include <type_traits>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Задача 3
 * Вернуть вторую цифру, стояющую после запятой введённого вещественного числа
 */

int main(){
    double a;
    int result; 

    cout << "Введите число\n";
    a = get_user_double_input();
    
    result = (int(a*1000) / 10) % 10;

    cout << result << "\n";
}
