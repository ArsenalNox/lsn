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
            cout << "31";
            break;

        case 2:
            cout << "28";
            break;

        case 3:
            cout << "31";
            break;

        case 4:
            cout << "30";
            break;

        case 5:
            cout << "31";
            break;

        case 6:
            cout << "30";
            break;

        case 7:
            cout << "31";
            break;

        case 8:
            cout << "31";
            break;

        case 9:
            cout << "30";
            break;

        case 10:
            cout << "31";
            break;

        case 11:
            cout << "30";
            break;

        case 12:
            cout << "31";
            break;

        default:
            cout << "Неизвестный месяц";
            break;
    }

    cout << "" << "\n";
}
