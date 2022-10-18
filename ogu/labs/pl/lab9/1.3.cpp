#include <iostream>
#include <string>
#include "../libs/utils.cpp"
#include <math.h>

using namespace std;

/*
Вариант 3
*/
double f1(int n){
	double result = 0;
	for (int i = 2; i < n+1; i++){
		result += pow(i, 3) + 5;
	}
	return result;
}

double f2(int m, double a){
	double result = 0;
	for (int i = 3; i < m+1; i++){
		result += 2*pow(i, 3) + i + a;
	}
	return result;
}

int main(){
	int n;
	cout << "Введите n" << endl;
	cin >> n;

	int m;
	cout << "Введите m" << endl;
	cin >> m;

	double a = 0;
	cout << "Введите a" << endl;
	{
		string input;
		while(1){
			cin >> input;
			bool valid = get_user_double_input(input, a);
			if (valid){
				break;
			} else {
				cout << "Введите корректное число\n"; 
			}
		}
	}

	double c = 0;
	cout << "Введите c" << endl;
	{
		string input;
		while(1){
			cin >> input;
			bool valid = get_user_double_input(input, c);
			if (valid){
				break;
			} else {
				cout << "Введите корректное число\n"; 
			}
		}
	}

	double y = c*c + f1(n) + 4.0*a + f2(m, a);

	cout << "Результат вычислений: " << y << endl;

	return 0;
}