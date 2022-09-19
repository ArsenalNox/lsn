#include <tgmath.h>
#include <iostream>
#include "../../libs/utils.cpp"

using namespace std;

/*
 * Задача 2
 * Перевод денежный суммы из доллара в рубль
 * по фиксированному курсу
 */

int main(){

    cout << "Enter amount of USD you wish to convert to RUB:\n";

    double number;
    string input;
    cin >> input;

    bool valid = get_user_double_input(input, number);
    if (valid){
        cout << "Valid number\n";
    } else {
        cout << "Invalid number\n"; 
        return 1;
    }

    double d = 1.53; //1 USD = 1.53 RUB 

    double result = d*number;

    cout << "Result RUB is: " << result << " \n";

    return 0;
}
