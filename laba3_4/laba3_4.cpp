#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите вашу оценку: ";
    int mark;
    cin >> mark;
    switch (mark) {
        case 5: 
            cout << "Отлично!";
            break;
        case 4:
            cout << "Хорошо!";
            break;
        case 3:
            cout << "Средне!";
            break;
        case 2:
            cout << "Хуже среднего!";
            break;
        case 1:
            cout << "Хуже среднего!";
            break;
        case 0:
            cout << "Хуже среднего!";
            break;
        default:
            cout << "Оценка вне диапозона";

     
    }
}
