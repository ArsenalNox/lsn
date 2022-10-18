#include <string>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * 3. Заполнить массив из 10 целых чисел с клавиатуры и вывести все его элементы,
оканчивающиеся нулем. Определить сумму элементов массива, оканчивающихся нулем.
 */

int main(){
    int range = 0; 

    cout << "Введите диапазон\n";
    cin >> range;
    int *numbers = new int[range];

    for (int i = 0; i < range; i++){
        cout << "Введите число " << i+1 << ": ";
        cin >> numbers[i];
    }

    int sum = 0;
    cout << "Числа, оканчивающиеся нулём: ";
    for (int i = 0; i < range; i++){
        if (numbers[i] % 10 == 0){
            cout << numbers[i] << " ";
        }
        sum += numbers[i];
    }
    cout << endl;

    cout << "Сумма элементов: " << sum << endl;
        
    return 0;
}
