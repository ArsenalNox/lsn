#include <cmath>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 13
 * найти площадь и периметр треунольника по трём его сторонам 
 */

int main(){
    double inputs[3];
    string labels[3] = {"a", "b", "c"};
    double p;
    double s;
    
    for (int i = 0; i<3; i++) {
        cout << "Введите сторону " << labels[i] << '\n';
        inputs[i] = get_user_double_input();
    }

    p = (inputs[0]+inputs[1]+inputs[2])/2;
    s = sqrt(p * (p - inputs[0]) * (p - inputs[1]) * (p - inputs[2]) );
    cout << "Периметр треугольника равен: " << p << "\n";
    cout << "Площадь треугольника равна: " << s << "\n";

    return 0;
}
