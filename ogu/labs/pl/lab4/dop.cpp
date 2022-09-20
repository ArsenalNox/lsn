#include <string>
#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Написать программу, вычисляющую значения индекса Хирша, отражающего эффективность
работы ученого
 */

int main(){
    int range; 
    int index = 0;

    cout << "Введите количество статей\n";
    cin >> range;

    int publications[range];

    for (int i = 0; i < range; i++){
        cout << "Количество цитирований статьи " << i+1 << endl;
        cin >> publications[i];

    }

    int num_cit_res = 0;
    for (int i = 0; i < range; i++){
        int num_cit_test = 0;
        for (int j = 0; j < range; j++){
            
        }
    }

    return 1;
}
