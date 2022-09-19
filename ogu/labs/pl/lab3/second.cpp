#include <bits/types/timer_t.h>
#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Написать программу, которая находит сумму чисел S = 1 + 2 + 3 + … до тех пор,
пока S не превысит введенное натуральное число n.
 */

int main(){
    int n;
    int s;
    int counter = 1;  

    cout << "Введите число n: \n";
    n = int(get_user_double_input());

    while(s<n){
        s += counter;
        cout << "S: " << s << " Шаг: " << counter << "\n";
        counter+=1;
    }

    cout << "Результат: " << s << "\n";

    return 1;
}
