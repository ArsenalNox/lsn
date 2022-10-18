#include <iostream>
#include <string>
#include "../libs/utils.cpp"
#include <math.h>

using namespace std;
/*
Вариант 3
Даны два натуральных числа. Выяснить, в каком из них больше цифр. 
(Определить функцию для расчета количества цифр натурального числа.) 
*/
int get_int_num_lenght(int num){
	int counter = 0;
	while (num > 0){
		counter++;
		num = num/10;
	}
	return counter;
}

int main(){
	int a;
	int b;

	cout << "Введите a" << endl;
	cin >> a;

	cout << "Введите b" << endl;
	cin >> b;

	int num_a = get_int_num_lenght(a);
	int num_b = get_int_num_lenght(b);

	if (num_a > num_b){
		cout << "Число " << a << " больше: " << num_a << " цифр";
	} else if (num_b > num_a){
		cout << "Число " << b << " больше: " << num_b << " цифр";
	} else {
		cout << "Числа" << " равны: " << num_b << " цифр";
	}

	return 0;
}