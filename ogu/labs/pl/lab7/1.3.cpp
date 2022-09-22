#include <iostream>
#include <limits>

using namespace std;

/*
Вариант 3
Дан двумерный массив размера n х m целых чисел. Размеры массива и сами элементы вводятся с клавиатуры. Определить по вариантам:
количество нечетных элементов массива.
*/

int main(){

	int size_n = 0;
	int size_m = 0;

	while(true){
		
		cout << "Введите размер n\n";
		cin >> size_n;

		cout << "Введите размер m\n";
		cin >> size_m;

		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Введите число.\n";
			continue;
		}

		if ((size_n <=0) || (size_m <= 0)){
			cout << "Размеры должны быть положительными.\n";
		} else {
			break;
		}
	}

	int count_odd = 0;

	int** matrix = new int*[size_n];

	for (int i = 0; i < size_n; i++){
		matrix[i] = new int[size_m];
		for (int j = 0; j < size_m; j++){
			cout << "Введите элемент [" << i << "]["<< j<< "]\n";

			while (true){
				cin >> matrix[i][j];
				if (cin.fail()){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Требуется ввести число.";
					continue;
				} else {
					break;
				}
			}

			if (!(matrix[i][j] % 2 == 0)){
				count_odd++;
			}

		}
	}
	
	cout << "Количество нечётных элементов: " << count_odd << endl;

	return 0;
}