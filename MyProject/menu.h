// ���������� ������: ��������� �������
// ������ ��������: ��311
// ���������� ������������� ��� �������� ���� �� �������� ������������
// ���������� �������� � ���� ��� �������: ������� �� ��������� �����; ������� ���� � �����������; ������� ���� ��� ����������
// ��������� ������� ��� �������� ����������: 1 ��� 30 �����

#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <cmath>
#include <fstream>
using namespace std;

void Continue (void)
    {
    cout << "\n\n��� ����������� ������� �� ����� �������...\n";
    _getch();
    }

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
void Color(char Button2)
{

        if (Button2 == 49)
        {
            system ("color 1");
        }
        else if (Button2 == 50)
        {
            system ("color 2");
        }
        else if (Button2 == 51)
        {
            system ("color 3");
        }
        else if (Button2 == 52)
        {
            system ("color 4");
        }
        else if (Button2 == 53)
        {
            system ("color 5");
        }
        else if (Button2 == 54)
        {
            system ("color 6");
        }
        else if (Button2 == 55)
        {
            system ("color 7");
        }
        else if (Button2 == 56)
        {
            system ("color 8");
        }
        else if (Button2 == 57)
        {
            system ("color 9");
        }
        else if (Button2 == 97 || Button2 == 65)
        {
            system ("color A");
        }
        else if (Button2 == 98 || Button2 == 66)
        {
            system ("color B");
        }
        else if (Button2 == 99 || Button2 == 67)
        {
            system ("color C");
        }
        else if (Button2 == 100 || Button2 == 68)
        {
            system ("color D");
        }
        else if (Button2 == 101 || Button2 == 69)
        {
            system ("color E");
        }
        else if (Button2 == 102 || Button2 == 70)
        {
            system ("color F");
        }

}

int Appear(char Button)
{

            while (true)
            {
            system ("cls");
            cout << "=============================================\n";
            cout << "|              ���� � ���������             |\n";
            cout << "=============================================\n";
            cout << "|              1. ���� �������              |\n";
            cout << "=============================================\n";
            cout << "|               2. ���� ����                |\n";
            cout << "=============================================\n";
            cout << "|               3. ���� �����               |\n";
            cout << "=============================================\n";
            cout << "|          Esc. ����� �� ���������          |\n";
            cout << "=============================================\n";
            Button4 = _getch();
            if (Button4 == 49)
            {
                USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>840</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                USD += str[i];
                cout << "���� �������: " << USD;// ����������� ����������� ����������� �����
            }
            }
            Read.close ();
            Continue();
            }
            else if (Button4 == 50)
            {
            USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>978</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                EUR += str[i];
                cout << "���� ����: " << EUR;// ����������� ����������� ����������� �����
            }
            }
            Read.close ();
            Continue();
            }
            else if (Button4 == 51)
            {
            USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>156</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                CNY += str[i];
                cout << "���� �����: " << CNY;// ����������� ����������� ����������� �����
            }
            }
            Read.close ();
            Continue();
            }
           else if (Button4 == 27)
            {
                exit(0);
            break;
            }
            }

}

int noAppear (char Button3)
{

            while (true)
            {
                Button4 = _getch();
                system ("cls");
                cout << "���� � ���������\n";
                cout << "1. ���� �������\n";
                cout << "2. ���� ����\n";
                cout << "3. ���� �����\n";
                cout << "Esc. ����� �� ���������";
            if (Button4 == 49)
            {
                USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>840</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                USD += str[i];
                cout << "���� �������: " << USD;// ����������� ����������� ����������� �����
            }
            }

    Read.close ();
            }
            else if (Button4 == 50)
            {
            USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>978</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                EUR += str[i];
                cout << "���� ����: " << EUR;// ����������� ����������� ����������� �����
            }
            }
            Read.close ();
            Continue();
            }
            else if (Button4 == 51)
            {
            USD = "\0";
                system ("cls");
            system ((command + " >nul").c_str ()); // ���������� ������� �� �������

            Sleep (10000);

            ifstream Read (FileName.c_str());

            while (getline(Read, str))
            {
            if (str == "          <td>156</td>")
            {
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                getline(Read, str);
                for (int i = 14; i < 14 + 7; i++)
                CNY += str[i];
                cout << "���� �����: " << CNY;// ����������� ����������� ����������� �����
            }
            }
            Read.close ();
            Continue();
            }
            else if (Button4 == 27)
            {
                exit(0);
                break;
            }
            }

}

#endif /* MENU_H */

