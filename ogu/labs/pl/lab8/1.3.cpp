#include <iostream>
#include <limits>
#include <string>

using namespace std;

/*
Вариант 3
С клавиатуры вводится строка символов, представляющая собой предложение 
со знаками препинания (точка, запятая, восклицательный знак). 
Вывести на экран все слова данного предложения, не содержащие цифр.
*/

int main(){
	const int TEXT_LENGTH = 3000;
	const int MAX_WORD_COUNT = 3000;

	cout << "Введите текст\n";

	string words[MAX_WORD_COUNT];

	char text[TEXT_LENGTH];
	cin.get(text, sizeof text);

	bool is_parsing_word = false;
	int word_count = 0;

	for (int i = 0; i < TEXT_LENGTH; i++){

		if (!is_parsing_word){
			if (isalpha(text[i]) || isdigit(text[i])){
				is_parsing_word = true;
			} else {
				continue;
			}
		}

		if(ispunct(text[i]) || text[i] == ' '){
			word_count++;
			is_parsing_word = false;
			continue;
		}

		words[word_count] += text[i];

		if (i == TEXT_LENGTH-1 || text[i] == '\n' || text[i] == '\0'){
			word_count++;
			break;
		}
	}

	for (int i = 0; i < word_count; i++){
		for (string::size_type j = 0; j < words[i].size(); j++){
			if (isdigit(words[i][j])){
				cout << "WORD: " << words[i] << endl;
				break;
			}
		}
		
	}

	return 0;
}