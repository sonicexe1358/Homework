#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <cmath>
#include <fstream>
#include "menu.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char Button1 = 0;
    char Button2 = 0;
    char Button3 = 0;
    char Button4 = 0;
    char Button5 = 0;
    string URL = "https://www.cbr.ru/currency_base/daily/"; // ссылка, которую будем парсить
    string FileName = "index.html"; // название файла, куда будет сохраняться исходный код страницы
    string command = "start wget\\bin\\wget.exe " + URL + " --no-check-certificate --tries=1 --force-html --html-extension  --output-document=" + FileName + "\0"; // команда для парсинга с ключами
    string str = "\0";
    string USD = "\0";
    string EUR = "\0";
    string CNY = "\0";
    system ("cls");
    cout << "Нужно ли вам меню?\n";
    cout << "Y - да\n";
    cout << "N - нет\n";
    Button1 = _getch();
    while (true)
    {
    if (Button1 == 121 || Button1 == 89)
    {
        system ("cls");
        cout << "Отлично, теперь нам надо составить меню по вашим параметрам!\n";
        cout << "Предлагаю вам, поменять цвет. По желанию можно оставить цвет по умолчанию\n";
        cout << "1. Синий\n";
        cout << "2. Зелёный\n";
        cout << "3. Голубой\n";
        cout << "4. Красный\n";
        cout << "5. Лиловый\n";
        cout << "6. Жёлтый\n";
        cout << "7. Белый (цвет по умолчанию)\n";
        cout << "8. Серый\n";
        cout << "9. Светло-синий\n";
        cout << "A. Светло-зелёный\n";
        cout << "B. Светло-голубой\n";
        cout << "C. Светло-красный\n";
        cout << "D. Светло-лиловый\n";
        cout << "E. Светло-жёлтый\n";
        cout << "F. Ярко-белый\n";
        cout << "N. Перейти дальше\n";
        Button2 = _getch();
        Color (Button2);
        if (Button2 == 110 || Button2 == 78)
        {
            while (true)
            {
                Button3 = _getch();
                system ("cls");
        cout << "Дальше нам нужно выбрать наличие оформления\n";
        cout << "Какое меню вам будет предпочтительнее?\n";
        cout << "1.С оформлением ввиде таблицы\n";
        cout << "2.Без оформления\n";
        if (Button3 == 49)
        {
        Appear (Button3);
        }
        else if (Button3 == 50)
        {
        noAppear (Button3);
        }
            }
        }
        }
            else if (Button1 == 110 || Button1 == 78)
        break;
    }
        return 0;
    }

