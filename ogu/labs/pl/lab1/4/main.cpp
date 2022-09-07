#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 4 
 * Вычислить среднее геометрическое значение двух введённых чисел
 */

int main(){
    double inputs[2];
    string labels[2] = {"A", "B"};
    
    for (int i = 0; i<2; i++) {
        cout << "Введите число " << labels[i] << '\n';
        inputs[i] = get_user_double_input();
    }

    double d;
    d = sqrt(inputs[0] * inputs[1]);
    
    cout << "Среднее геометрическое двух чисел равно: " << d << "\n";

    return 0;
}
