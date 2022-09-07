#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 7
 * Вычислить площадь поверхности прямоугольного параллелепипеда по
 * трём его смежным рёбрам 
 */

int main(){
    double inputs[3];
    string labels[3] = {"a", "b", "c"};
    
    for (int i = 0; i<3; i++) {
        cout << "Введите ребро " << labels[i] << '\n';
        inputs[i] = get_user_double_input();
    }

    double d;
    d = 2*(
            inputs[0]*inputs[1]
            + inputs[1]*inputs[2]
            + inputs[0]*inputs[2]
        );
    
    cout << "Плозадь поверхности равна: " << d << "\n";

    return 0;
}
