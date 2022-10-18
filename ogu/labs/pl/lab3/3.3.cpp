#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Найти сумму нечетных цифр введенного натурального числа.
 */

int main(){
    int n;
    int s;
    int counter = 1;  

    cout << "Введите число n: \n";
    n = int(get_user_double_input());

    while(n != 0){
        if (!(counter % 2 == 0)) {
            s += n % 10;
        }
        n = n / 10;
        cout << "S: " << s << " Шаг: " << counter << "\n";
        counter+=1;
    }

    cout << "Результат: " << s << "\n";

    return 0;
}
