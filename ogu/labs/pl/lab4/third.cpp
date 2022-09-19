#include <bits/types/timer_t.h>
#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Для каждого числа от 1 до n вывести все его делители.
 */

int main(){
    int range; 

    cout << "Введите n\n";
    cin >> range;

    for (int i = 1; i<range+1; i++){
        cout << "Число " << i << " делится нацело на: ";
        for (int j = 1; j<i; j++){
            if (i%j==0){
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 1;
}
