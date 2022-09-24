#include <iostream>
#include <string>

using namespace std;

/*
Вариант 3
С клавиатуры вводится строка символов, представляющая собой предложение 
со знаками препинания (точка, запятая, восклицательный знак). 
Вывести на экран все слова данного предложения, не содержащие цифр.
*/

int main(){
	cout << "Введите текст\n";

	string words[3000];

	string text;
	std::getline(cin, text);

	bool is_parsing_word = false;
	int word_count = 0;

	for (string::basic_string::size_type i = 0; i < text.length(); i++){
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

		if (i == text.length()-1 || text[i] == '\n' || text[i] == '\0'){
			word_count++;
			break;
		}
	}
	string words_even = "";
	string words_odd = "";

	for (int i = 0; i < word_count; i++){

		if ( i % 2 == 0){
			words_even += words[i] + " ";
		} else {
			words_odd += words[i] + " ";
		}
	}
	
	cout << words_even << endl;
	cout << words_even + words_odd << endl;

	return 0;
}