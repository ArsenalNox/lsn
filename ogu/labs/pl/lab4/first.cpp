#include <string>
#include <iostream>
#include "../libs/utils.cpp"
#include <math.h>

using namespace std;

/*
 * Вариант 3. Написать программу, которая находит синус всех четных чисел в заданном
диапазоне.
 */

int main(){
    int range; 

    cout << "Введите диапазон\n";
    cin >> range;

    for (int i = 0; i<range; i++){
        if (i % 2 == 0){
            cout << "Синус " << i << " равен " << sin(i) << endl;
        }
    }

    return 1;
}
