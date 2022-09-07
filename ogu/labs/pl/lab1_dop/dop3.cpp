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
    string a;

    cout << "Введите число\n";
    a = to_string(get_user_double_input());
    
    for (int i = 0; i < a.length(); i++){
        if ( a[i] == 46 || a[i] == 44 ){
            cout << a[i+2] << "\n";
            break;
        }
    }

}
