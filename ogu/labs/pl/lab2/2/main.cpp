#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Программа вводит год в виде целого числа. Определить, является ли он високосным. Год считается високосным, если он делится на 4, исключая года, делящиеся на 100, но не делящиеся на 400. Например, 2010 – високосный год (делится на 4, но не на 100); 1800, 1900, 2100 – не високосные (делятся на 100, но не на 400); 1600, 2000, 2400 – високосные (делятся на 400).
 */

int main(){
    int input;
    
    cout << "Введите число\n";

    input = int(get_user_double_input());

    if (
            (input % 100 == 0)
            &&
            !(input % 400 == 0)
       ){
        cout << "Год не високосный";

    } else if (input % 4 == 0){
        cout << "Год високосный";

    } else {
        cout << input % 4;
        cout << "Год не високосный";
    }

    cout << "" << "\n";
}