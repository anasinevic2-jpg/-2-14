#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double t;
    int vl, os;
    cout << "Введите температуру воздуха: ";
    cin >> t;
    cout << "Введите влажность воздуха (0...100): ";
    cin >> vl;
    cout << "Введите признак осадков (0/1): ";
    cin >> os;

    if (vl < 0 || vl > 100) {
        cout << "Некорректная влажность" << endl;
    }
    else if (t >= -3 && t <= 1 && os == 1) {
        cout << "Предупреждение: Осторожно, гололёд!" << endl;
    }
    else if (t > 30 && vl >= 70) {
        cout << "Предупреждение: Жара!" << endl;
    }
    else {
        cout << "Предупреждений нет" << endl;
    }
    return 0;
}