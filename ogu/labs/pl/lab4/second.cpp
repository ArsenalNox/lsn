#include <string>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Найти среднее арифметическое нечетных чисел из заданного диапазона.
 */

int main(){
    int range; 

    cout << "Введите диапазон\n";
    cin >> range;

    int sum = 0;
    int counter = 0;
    for (int i = 0; i<range; i++){
        if (!(i % 2 == 0)){
            cout << i << endl;;
            sum+=i;
            counter++;
        }
    }
    cout << "Среднее арифметическое: " << sum/float(counter) << endl;

    return 1;
}
