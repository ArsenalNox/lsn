#include <iostream>
#include "../libs/utils.cpp"

using namespace std;

/*
 * Написать программу, вычисляющую дату, следующую за данной. Дата задается тремя
числами d, m, y, обозначающими соответственно день, месяц и год.
 */

int main(){
    int date;
    int month; 
    int year;

    int date_new;
    int month_new;
    int year_new;

    cout << "Введите число \n";
    date = int(get_user_double_input());

    cout << "Введите месяц \n";
    month = int(get_user_double_input());

    cout << "Введите год \n";
    year = int(get_user_double_input());

    date_new = date;
    month_new = month;
    year_new = year;

    
    if (date > 31 || date < 1){
        cout << "Ошибка";
        return 1;
    }

    if (month > 12 || month < 1){
        cout << "Ошибка";
        return 1;
    }

    switch (month) {
        case 1:
        case 3:
        case 10:
        case 5:
        case 6:
        case 8:
        case 7:
            if (date == 31){
                date_new = 1;
                month_new++;
            } else {
                date_new++;
            }
            break;

        case 4:
        case 9:
        case 11:
            if (date == 30){
                date_new = 1;
                month_new++;
            } else {
                date_new++;
            }
            break;

        case 12:
            if (date == 31){
                date_new = 1;
                month_new = 1;
                year_new++;
            } else {
                date_new++;
            }
            break;

        case 2:
            if (!((year % 100 == 0) && !(year % 400 == 0))
                    &&
                    (year % 4 == 0)
                ){
                if (date == 29){
                    month_new++;
                    date_new = 1;
                } else {
                    date++;
                }
            } else {
                if (date == 28){
                    month_new++;
                    date_new = 1;
                } else {
                    date++;
                }
            }

            break;

        default:
            break;
    }
        
    cout << "d: " << date_new << " m: " << month_new << " y: " << year_new << "\n";


    cout << "" << "\n";

    return 1;
}
