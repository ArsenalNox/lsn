#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 3
 * Определить, делится ли введённое число на 5
 */

int main(){
    int input;
    
    cout << "Введите число\n";

    input = int(get_user_double_input());

    if (input % 5 == 0){
        cout << "Число делится на 5";
    } else {
        cout << "Число не делится на 5";
    }

    cout << "" << "\n";
}
