#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Доп задача 1
 * Поменять значения двух переменных, не использую третью
 */

int main(){
    int a;
    int b;
    
    cout << "Введите число A\n";
    a = get_user_double_input();
    cout << "Введите число B\n";
    b = get_user_double_input();
    
    cout << "Значение A: " << a << " Значение B: " << b << "\n";
    
    a = a*b;
    b = a/b;
    a = a/b;

    cout << "Значение A: " << a << " Значение B: " << b << "\n";
}
