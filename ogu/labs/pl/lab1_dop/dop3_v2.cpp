#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Задача 3
 * Вернуть вторую цифру, стояющую после запятой введённого вещественного числа
 */

int main(){
    double a;
    int result; 
    while(1){

    cout << "Введите число\n";

    string input;
    cin >> input;

    bool valid = get_user_double_input(input, a);
    if (valid){
        cout << "Valid number\n";
    } else {
        cout << "Invalid number\n"; 
        return 1;
    }


    result = (int(a*1000) / 10) % 10;

    cout << result << "\n";
    }
}
