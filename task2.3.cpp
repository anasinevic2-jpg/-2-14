#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char code;
    int intensity;

    cout << "Введите код явления (R - дождь, S - снег, F - туман, W - ветер): ";
    cin >> code;
    cout << "Введите интенсивность (1..3): ";
    cin >> intensity;

    int risk;

    switch (code) {
    case 'R':
    case 'F':
        risk = 1;
        break;
    case 'S':
    case 'W':
        risk = 2;
        break;
    default:
        cout << "Неверный код явления" << endl;
        return 1;
    }

    if (intensity == 3) {
        risk++;
        if (risk > 3) risk = 3;
    }

    string level;
    if (risk == 1) level = "Low";
    else if (risk == 2) level = "Medium";
    else level = "High";

    cout << "Уровень риска: " << risk << " (" << level << ")" << endl;

    return 0;
}