#include <iostream>
#include "../libs/utils.cpp"
#include <random>

using namespace std;

/*
Отсортировать массив из N целых чисел в неубывающем порядке с помощью сортировки прямыми вставками.
 */

int main(){
    int range = 0; 
    const int LOCAL_RAND_MAX = 1000;
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1, LOCAL_RAND_MAX);

    cout << "Введите количество элементов\n";
    cin >> range;
    int *numbers = new int[range];

	cout << "Элементы массива: ";
    for (int i = 0; i < range; i++){
        numbers[i] = (-LOCAL_RAND_MAX/2+dist6(rng));
		cout << numbers[i];
		if(!(i==range-1)){
			cout << ", ";
		} else {
			cout << endl;
		}
    }

	//Пройтись по всем элементам начиная с первого
	//От него спускаться в низ к началу
	//Если элемент больше предидущего - всё ок
	//Иначе, если предидущий элемент меньше текущего, поменять их местами
	//Это же почти сорт пузырьком?
    for (int i = 1; i < range; i++){
		for (int j = i; j > 0; j--){
			if (!(numbers[j-1] > numbers[j])){
				break;
			}
			swap(numbers[j-1], numbers[j]);
		}
	}

	cout << "Сортированные элементы массива: ";
    for (int i = 0; i < range; i++){
		cout << numbers[i];
		if(!(i==range-1)){
			cout << ", ";
		}
    }

    return 0;
}