#include <iostream>
#include "../libs/utils.cpp"
#include <random>

using namespace std;

/*
Вариант 3 
В одномерном массиве, состоящем из N вещественных чисел, вычислить:
произведение элементов с четными индексами;
сумму элементов массива, принадлежащих множеству (-∞, A]∪(B, +∞).
 */

int main(){
    int range = 0; 
    const int LOCAL_RAND_MAX = 1000000;
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1, LOCAL_RAND_MAX);

    cout << "Введите количество элементов\n";
    cin >> range;
    double *numbers = new double[range];

    double bord_a = 0;
    double bord_b = 0;
    while (true){
        cout << "Введите нижнюю границу A: ";
        cin >> bord_a;

        cout << "Введите нижнюю границу B: ";
        cin >> bord_b;

        if (bord_a < bord_b){
            break;
        } else {
            cout << "Нижняя граница обязательно должна быть меньше верхней!";
            continue;
        }
    }

    double sum = 0;
    double product = 1;

    for (int i = 0; i < range; i++){
        numbers[i] = (-LOCAL_RAND_MAX/2+(double)dist6(rng))/100.0;

        cout << "Элемент " << i+1 << ": " << numbers[i] << endl;

        if ( (i+1) % 2 == 0){
            product *= numbers[i];
        }

        if ( (numbers[i] <= bord_a) || (numbers[i] > bord_b) ){
            // cout << "Число " << numbers[i] << " входит в множество\n";
            sum += numbers[i];
        }
    }

    cout << "Произведение чётных индексов: " << product << endl;
    cout << "Сумма элементов, входящих в множество: " << sum << endl;

    return 0;
}
