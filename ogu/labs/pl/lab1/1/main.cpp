#include <tgmath.h>
#include <iostream>

using namespace std;

/*
 * Задача 1
 * Вычислить среднее арифметическое значение трёх 
 * введённых чисел
 */

int main(){
    double inputs[3];
    string labels[3] = {"a", "b", "c"};
    
    for (int i = 0; i<3; i++) {
        cout << "Enter variable " << labels[i] << '\n';
        cin >> inputs[i];
    }

    double d;
    d = (inputs[0] + inputs[1] + inputs[2])/3;
    
    cout << "Result d is: " << d << "\n";

    return 0;
}
