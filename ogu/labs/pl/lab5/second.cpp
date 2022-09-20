#include <iostream>
#include "../libs/utils.cpp"
#include <random>

using namespace std;

/*
Заполнить массив из 10 элементов случайными числами, вывести его на экран и определить
максимальный элемент и его номер в массиве.
 */

int main(){
    int range; 
    int biggest = 0;
    int biggest_index = 0;

    cout << "Введите диапазон\n";
    cin >> range;
    int *numbers = new int[range];

    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1,10000);

    cout << "Элементы массива: " << endl;
    for (int i = 0; i < range; i++){
        numbers[i] = dist6(rng);
        cout << numbers[i];

        if (numbers[i] > biggest){
            biggest = numbers[i];
            biggest_index = i;
        }

        if (i+1<range){
            cout << ", ";
        }

        if ((i % 10 == 0) && (i>1)){
            cout << endl;
        }
    }

    cout << endl;

    cout << "Наибольший элемент " << biggest_index << ": " << biggest << endl;
        
    return 0;
}
