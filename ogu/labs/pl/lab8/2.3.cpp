#include <iostream>
#include <limits>

using namespace std;

/*
Вариант 3
В данной действительной квадратной матрице порядка n найти сумму элементов строки, в которой расположен элемент с 
наименьшим значением. Предполагается, что такой элемент единственный.
*/

int main(){

	int size_n = 0;

	while(true){
		
		cout << "Введите размер n\n";
		cin >> size_n;

		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Введите число.\n";
			continue;
		}

		if (size_n <= 0){
			cout << "Размеры должны быть положительными.\n";
		} else {
			break;
		}
	}

	int size_m    = size_n;
	int count_odd = 0;
	int index_smallest_row     = -1;
	int smallest_element = 0;
	bool first_element = true;

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
			if (first_element){
				smallest_element = matrix[i][j];
				index_smallest_row = i;
				first_element = false;
			}

			if (smallest_element > matrix[i][j]){
				smallest_element = matrix[i][j];
				index_smallest_row = i;
			}
		}
	}
	int sum_elements = 0;
	for (int j = 0; j < size_m; j++){
		sum_elements += matrix[index_smallest_row][j];
	}

	cout << "Сумма элементов строки с наименьшим элементом: " << sum_elements << endl;

	return 0;
}