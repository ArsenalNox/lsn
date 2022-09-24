#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Проверить, является ли введенный символ 
 * знаком препинания (точкой, запятой, восклицательным знаком).
 */

int main(){
    char a;
    
    cout << "Введите знак A\n";
    cin >> a;
    
    switch (a) {
        case '!':
            cout << "Вы ввели восклицательный знак";
            break;

        case '.':
            cout << "Вы ввели точку";
            break;

        case ',':
            cout << "Вы ввели запятую";
            break;

        default:
            cout << "Неизвестный симовл";
            break;
    }

    cout << "" << "\n";
}
