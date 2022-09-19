#include <cmath>
#include <cstdlib>
#include <math.h>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Возвести число a в натуральную степень n, используя только операцию умножения. При
этом необходимо выполнить возведение в степень за наименьшее количество умножений.
 */

int main(){
    int n;
    int k;
    double old_a;
    double a;
    double result;
    int counter = 1;  

    cout << "Введите число a: \n";
    a = int(get_user_double_input());
    old_a = a;

    cout << "Введите число n: \n";
    n = int(get_user_double_input());
        
    k = n % 2;

    cout << "Кол-во сокращённых умножений: " << int(sqrt(n)) << "\n";
    cout << "Кол-во обычных умножений: " << k << "\n";

    if (n==1){
        cout << "Результат: " << a << "\n";
        return 1;
    }

    if (n==0){
        cout << "Результат: " << 1 << "\n";
        return 1;
    }

    for (int i = 0; i < n-1; i++){

        cout << "substep " << i << "\n";

        a = a * old_a;
    }

    cout << "Результат: " << a << "\n";

    return 1;
}
