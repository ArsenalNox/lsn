#include <bits/types/timer_t.h>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <math.h>
#include <string>
#include <tgmath.h>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Вариант 3. Найти все делители введенного натурального числа n, делящиеся на 3.
 */

int main(){
    unsigned long n;
    int counter = 1;  
    vector<int> divisors;

    cout << "Введите число n: \n";
    cin >> n;
    cout << n;
    
    while(counter < n){

        system("clear");
        cout << n << "/" << counter << "\n";

        if (counter > n/2){
            break;
        }

        if (n % counter == 0) {
            divisors.push_back(counter);
        }
        counter+=1;
        
    }

    system("clear");
    cout << "Делители числа: " << n << "\n";
    for (auto& v : divisors){
        cout << v << ", ";
    }
    cout << "\n";

    return 1;
}
