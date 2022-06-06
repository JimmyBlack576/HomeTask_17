#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int symbol_num;
    char symbol;

    cout << "Введите символ: \n";
    cin >> symbol;
    symbol_num = symbol;
    if ((symbol_num == 33) || (symbol_num >= 44) &&
        (symbol_num <= 46) || (symbol_num == 58) ||
        (symbol_num == 59) || (symbol_num == 63))
    {
        cout << "Вы ввели знак препинания \n";
    }
    else if (symbol_num >= 46 && symbol_num <= 57)
    {
        cout << "Вы ввели цифру \n";
    }

    else if ((symbol_num >= 65 && symbol_num <= 90) ||
        (symbol_num >= 97 && symbol_num <= 122))
    {
        cout << "Вы ввели букву \n";
    }
    else 
    {
        cout << "Я не знаю такого символа!\n";
    }
    
}

