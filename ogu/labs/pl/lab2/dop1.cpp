#include <bits/types/timer_t.h>
#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Написать программу, определяющую принадлежит ли тока с координатами (x, y)
треугольнику, заданному координатами его вершин.
 */

double area(
        double x1, double y1, 
        double x2, double y2, 
        double x3, double y3
        ){
    //Вычисляет площаль треугольника
    return abs(((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1))/2.0);
}


class Triangle {
  public:    
    double x1;
    double x2;
    double x3;

    double y1;
    double y2;
    double y3;
};

int main(){
    double input_x;
    double input_y;

    Triangle triangle;


    cout << "Введите x1\n";
    triangle.x1 = get_user_double_input();

    cout << "Введите y1\n";
    triangle.y1 = get_user_double_input();


    cout << "Введите x2\n";
    triangle.x2 = get_user_double_input();

    cout << "Введите y2\n";
    triangle.y2 = get_user_double_input();


    cout << "Введите x3\n";
    triangle.x3 = get_user_double_input();

    cout << "Введите y3\n";
    triangle.y3 = get_user_double_input();

    cout << "Введите x точки\n";
    input_x = get_user_double_input();

    cout << "Введите y точки\n";
    input_y = get_user_double_input();

        
    double area_orig = area(
            triangle.x1, triangle.y1,
            triangle.x2, triangle.y2,
            triangle.x3, triangle.y3
            );

    double area1 = area(
            input_x, input_y,
            triangle.x2, triangle.y2,
            triangle.x3, triangle.y3
            );

    double area2 = area(
            triangle.x1, triangle.y1,
            input_x, input_y,
            triangle.x3, triangle.y3
            );

    double area3 = area(
            triangle.x1, triangle.y1,
            triangle.x2, triangle.y2,
            input_x, input_y
            );
    
    cout << "Triangle\n" 
      << "x1 " << triangle.x1 << "\n"
      << "x2 " << triangle.x2 << "\n"
      << "x3 " << triangle.x3 << "\n"
      << "y1 " << triangle.y1 << "\n"
      << "y2 " << triangle.y2 << "\n"
      << "y3 " << triangle.y3 << "\n"
      << "User x " << input_x << "\n"
      << "User y " << input_y << "\n";

    cout << "Area original: " << area_orig << "\n";

    cout << "Area1: " << area1 << "\n";
    cout << "Area2: " << area2 << "\n";
    cout << "Area3: " << area3 << "\n";

    if (area_orig == area1 + area2 + area3){
        cout << "Точка находится внутри треугольника";
    } else {
        cout << "Точка находится вне треугольника";
    }
        
    cout << "" << "\n";
}
