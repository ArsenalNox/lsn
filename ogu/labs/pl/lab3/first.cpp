#include <bits/types/timer_t.h>
#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Человек открыл счет в банке, вложив x руб. Через каждый месяц размер вклада
увеличивается на p % от имеющейся суммы. Определить, через сколько месяцев размер вклада
превысит y руб. Получить ответ для x = 1000 руб., p = 2%, y = 1200 руб.
 */

int main(){
    double roubles_req;
    double roubles_current;
    int counter = 0;
    
    cout << "Кол-во рублей: \n";
    double roubles_in = get_user_double_input();
    
    cout << "Процент: \n";
    double percent = get_user_double_input();

    cout << "Необходимо рублей\n";
    roubles_req = get_user_double_input();
    roubles_current=roubles_in;

    while(true){
        counter+=1;
        roubles_current += roubles_current*percent;
        cout << "Месяц " << counter << "\n" 
            << "Рублей сейчас:" << roubles_current << "\n";

        if (roubles_current > roubles_req){
            break;
        }
    }

    cout << "Необходимо месяцев: " << counter << "\n";

    return 1;
}
