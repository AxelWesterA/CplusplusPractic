#include <iostream>
#include <string>
#include <clocale>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

double func_lab2(double x) {
    double ax = fabs(x);

    if (ax <= 0.1)
        return x*x*x - 0.1;
    else if (ax <= 0.2)
        return 0.2 * x - 0.1;
    else
        return x*x*x + 0.1;
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


void lab1() {
    double x, y;
    const double r1 = 3, r2 = 8;

    cout << "Задание 1. Введите координаты x и y через пробел: ";
    cin >> x >> y;

    if (cin.fail()) {
        clearInput();
        cerr << "Ошибка: введены некорректные символы!\n";
        return;
    }
    string result;

    if (x>0||x*x + y*y < r1 * r1 || x*x + y*y > r2 * r2)               result = "Снаружи\n";
    else if (x < 0 && x*x + y*y > r1 * r1 && x*x + y*y < r2 * r2)      result = "Внутри\n";
    else if (x <= 0 || x*x + y*y == r1 * r1 && x*x + y*y == r2 * r2)   result = "На границе\n";

    cout << result << "\n";
    cout << "Задание 2. Введите номер карты.\n";
    cout << "1. Шестерка.\n";
    cout << "2. Семерка.\n";
    cout << "3. Восьмерка.\n";
    cout << "4. Девятка.\n";
    cout << "5. Десятка.\n";
    cout << "6. Валет.\n";
    cout << "7. Дама.\n";
    cout << "8. Король.\n";
    cout << "9. Туз.\n";
    int card;
    cin >> card;

    if (cin.fail() && card >= 1 && card<= 9) {
        clearInput();
        cerr << "Ошибка: введены некорректные символы или значение вне промежутка!\n";
        return;
    }
    switch(card){
    case 1:
        cout << "Карта с достоинством 6\n";
        break;

    case 2:
        cout << "Карта с достоинством 7\n";
        break;

    case 3:
        cout << "Карта с достоинством 8\n";
        break;

    case 4:
        cout << "Карта с достоинством 9\n";
        break;

    case 5:
        cout << "Карта с достоинством 10\n";
        break;

    case 6:
        cout << "Карта с достоинством 11\n";
        break;

    case 7:
        cout << "Карта с достоинством 12\n";
        break;

    case 8:
        cout << "Карта с достоинством 13\n";
        break;

    case 9:
        cout << "Карта с достоинством 14\n";
        break;

    default:
        cout << "Введена не существующая карта!\n";
        break;}
}
void lab2() {
    double x;
    cout << "Введите стоимость одной штуки (руб): ";
    cin >> x;

    if (cin.fail() || x < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cerr << "Ошибка ввода!\n";
        return;
    }

    cout << "\nКол-во\tСтоимость\n";
    for (int n = 10; n <= 100; n += 10) {
        cout << n << "\t" << n * x << "\n";
    }

    double a, b, h;

    cout << "Введите a, b и шаг h: ";
    cin >> a >> b >> h;

    if (cin.fail() || h <= 0 || a > b) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Ошибка: проверьте, что a <= b и h > 0.\n";
        return;
    }

    cout << "\n-----------------------------\n";
    cout << setw(10) << "x"
         << setw(15) << "y" << "\n";
    cout << "-----------------------------\n";

    cout << fixed << setprecision(4);

    double eps = h / 1000.0;
    for (double x = a; x <= b + eps; x += h) {
        cout << setw(10) << x
             << setw(15) << func_lab2(x) << "\n";
    }
    cout << "-----------------------------\n";
}

void lab3() {
    cout << "Лабораторная 3 пока не реализована.\n";
}
void lab4() {
    cout << "Лабораторная 4 пока не реализована.\n";
}

void lab5() {
    cout << "Лабораторная 5 пока не реализована.\n";
}
void lab6() {
    cout << "Лабораторная 6 пока не реализована.\n";
}

void lab7() {
    cout << "Лабораторная 7 пока не реализована.\n";
}
void lab8() {
    cout << "Лабораторная 8 пока не реализована.\n";
}

void printMenu() {
    cout << "\n===== Меню =====\n";
    cout << "1. Лабораторная 1\n";
    cout << "2. Лабораторная 2\n";
    cout << "3. Лабораторная 3\n";
    cout << "4. Лабораторная 4\n";
    cout << "5. Лабораторная 5\n";
    cout << "6. Лабораторная 6\n";
    cout << "7. Лабораторная 7\n";
    cout << "8. Лабораторная 8\n";
    cout << "0. Выход\n";
    cout << "Выбор: ";
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    while (true) {
        printMenu();
        cin >> choice;
        if (cin.fail()) {
            clearInput();
            cerr << "Введите число!\n";
            continue;
        }
        switch (choice) {
            case 1:
                system("cls");
                system("cls");
                lab1();
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                lab2();
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                lab3();
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                lab4();
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                lab5();
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                lab6();
                system("pause");
                system("cls");
                break;
            case 7:
                system("cls");
                lab7();
                system("pause");
                system("cls");
                break;
            case 8:
                system("cls");
                lab8();
                system("pause");
                system("cls");
                break;
            case 0: return 0;
            default: cout << "Нет такого пункта.\n";
        }
    }
}
