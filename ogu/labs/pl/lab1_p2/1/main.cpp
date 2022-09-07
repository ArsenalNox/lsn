#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 1
 * поменять места первую и последню цифру введённого трёхзначного числа
 */

int main(){
    string input;
    
    cout << "Введите трёхначное число\n";
    cin.clear();

    while (1){

        input = to_string(get_user_double_input());
        
        if (input.length() == 10){ ///Не совсем понимаю почему тут 10 работает, а 3 нет
            break;
        } else {
            cout << "Введите трёхзначное число!!\n";
        }
    }
    
    cout << input[2] << input[1] << input[0] << "\n";
}
