#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 5
 * Найти гипотенузу прямоугольного треугольника по двум его катетам
 */

int main(){
    double inputs[2];
    string labels[2] = {"a", "b"};
    
    for (int i = 0; i<2; i++) {
        cout << "Введите катет " << labels[i] << '\n';
        inputs[i] = get_user_double_input();
    }

    double d;
    d = sqrt(pow(inputs[0], 2) + pow(inputs[1], 2));
    
    cout << "Гипотинуза равна: " << d << "\n";

    return 0;
}
