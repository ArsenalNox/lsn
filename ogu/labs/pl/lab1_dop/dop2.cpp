#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include <type_traits>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Задача 2
 * Найти по углу часовой стрелки угол минутной
 */

int main(){
    double ang_h;
    double ang_m;
    
    cout << "Введите число угол часовой стрелки\n";
    ang_h = get_user_double_input();
    
    //часы идут секторами в кол-ве 12 секторов, один сектор 360/12
    //Минутная стрелка идёт процентно от 0-30 градусов
    //Найти сколько процентов одного часа прошла часовая стрелка
    //Минутная будет 360*%часовой 

    ang_m = (100.0 * fmod(ang_h, 30.0)) / 30.0; //% от 30 градусов
    
    ang_m = 360.0 * (ang_m/100.0);

    cout << "Значение минутной стрелки: " << ang_m << "\n";
}
