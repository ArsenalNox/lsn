#include <iostream>
#include <type_traits>

using namespace std;

//TODO: Изучить декораторы, или их наличие или аналоги
//TODO: Добавить модульности
//TODO: Написать модули:
//TODO: 1 - Проверка на положительное/отрицательное число
//TODO: 2 - Проверка на лимит макс/мин
//TODO: 3 - Проверка строк по длинне или содержанию

double get_user_double_input(){
    string input; //Брать входные данные от пользователя строкой
    double number; //Брать такой тип данных, потом перевести в целое или строку

    int dot_count = 0; //Кол-во точек
    while(1){ //До тех пор пока пользователь не введёт правильное число
        bool is_input_invalid = false; //Неправильный ли ввод

        cin >> input;

        for (long long unsigned int i = 0; i < input.length(); i++){

            if (input[i] == 46 || input[i] == 44){ //Если вводится точка или запятая
                //BUG: Если вводить именно запятую, в доп задаче 3 неправильно определяется 
                //вторая цифра после запятой

                dot_count++; 
                
                //Если первым символом идёт точка, либо же точек больше одной
                //- невалиден
                if (dot_count>1){
                    is_input_invalid = true;

                } else if (input.length() == 1){
                    is_input_invalid = true;

                } else {
                    continue;
                }
            } else if (input[i] == 45 && i==0){ // "-"
                continue;

            } else if (!isdigit(input[i])){ //Если символ не является цифрой
                is_input_invalid = true;
            }

            if (is_input_invalid){ //Прекратить обработку числа, если оно уже невалидное
                cout << "Пожалуйста введите число!\n";
                break;
            }
        }
        
        if (!is_input_invalid){
            //atof - конвертировать строку в число, с плавающей запятой
            //c_str - возвращяет указатель на ввод, законенный "\n"?
            number = atof(input.c_str());
            break;
        }
    }
    return number;
}

bool get_user_double_input(string in, double& res) {
    try {
        size_t read = 0;
        res = std::stod(in, &read);
        if (in.size() != read)
            return false;
    } catch (invalid_argument) {
        return false;
    }    
    return true;
}