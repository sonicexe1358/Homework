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
    string URL = "https://www.cbr.ru/currency_base/daily/"; // ������, ������� ����� �������
    string FileName = "index.html"; // �������� �����, ���� ����� ����������� �������� ��� ��������
    string command = "start wget\\bin\\wget.exe " + URL + " --no-check-certificate --tries=1 --force-html --html-extension  --output-document=" + FileName + "\0"; // ������� ��� �������� � �������
    string str = "\0";
    string USD = "\0";
    string EUR = "\0";
    string CNY = "\0";
    system ("cls");
    cout << "����� �� ��� ����?\n";
    cout << "Y - ��\n";
    cout << "N - ���\n";
    Button1 = _getch();
    while (true)
    {
    if (Button1 == 121 || Button1 == 89)
    {
        system ("cls");
        cout << "�������, ������ ��� ���� ��������� ���� �� ����� ����������!\n";
        cout << "��������� ���, �������� ����. �� ������� ����� �������� ���� �� ���������\n";
        cout << "1. �����\n";
        cout << "2. ������\n";
        cout << "3. �������\n";
        cout << "4. �������\n";
        cout << "5. �������\n";
        cout << "6. Ƹ����\n";
        cout << "7. ����� (���� �� ���������)\n";
        cout << "8. �����\n";
        cout << "9. ������-�����\n";
        cout << "A. ������-������\n";
        cout << "B. ������-�������\n";
        cout << "C. ������-�������\n";
        cout << "D. ������-�������\n";
        cout << "E. ������-�����\n";
        cout << "F. ����-�����\n";
        cout << "N. ������� ������\n";
        Button2 = _getch();
        Color (Button2);
        if (Button2 == 110 || Button2 == 78)
        {
            while (true)
            {
                Button3 = _getch();
                system ("cls");
        cout << "������ ��� ����� ������� ������� ����������\n";
        cout << "����� ���� ��� ����� ����������������?\n";
        cout << "1.� ����������� ����� �������\n";
        cout << "2.��� ����������\n";
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

