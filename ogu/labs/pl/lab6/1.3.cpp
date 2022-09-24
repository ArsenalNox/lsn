#include <iostream>
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

    std::random_device rd;     // Only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // Random-number engine used (Mersenne-Twister in this case)
    std::uniform_int_distribution<int> uni(-10000,10000); // Guaranteed unbiased

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
        numbers[i] = uni(rng)/10.0;

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
