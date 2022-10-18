#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Написать программу, запрашивающую номер месяца и выдающую в ответ
количество дней в нем (год невисокосный). 
 */

int main(){
    int a;
    
    cout << "Введите номер месяца\n";
    a = int(get_user_double_input());

    switch (a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31";
            break;

        case 2:
            cout << "28";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30";
            break;

        default:
            cout << "Неизвестный месяц";
            break;
    }

    cout << "" << "\n";
}
