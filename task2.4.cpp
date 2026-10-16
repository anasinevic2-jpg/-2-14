#include <iostream>
#include <string>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    char code;
    double temperature, wind, visibility;
    cout << "Введите код явления (R/S/F/W): ";
    cin >> code;
    cout << "Введите температуру: ";
    cin >> temperature;
    cout << "Введите скорость ветра: ";
    cin >> wind;
    cout << "Введите видимость (км): ";
    cin >> visibility;
    if (wind < 0) {
        cout << "Ошибка: отрицательная скорость ветра" << endl;
        return 1;
    }
    if (visibility <= 0) {
        cout << "Ошибка: неположительная видимость" << endl;
        return 1;
    }
    int risk;
    string reason = "без повышения";
    switch (code) {
    case 'R':
        risk = 1;
        if (wind >= 20) {
            risk++;
            reason = "ветер >= 20";
        }
        break;
    case 'S':
        risk = 1;
        if (temperature < -10 && wind >= 15) {
            risk++;
            reason = "температура < -10 и ветер >= 15";
        }
        break;
    case 'F':
        risk = 2;
        if (visibility < 0.2) {
            risk++;
            reason = "видимость < 0.2";
        }
        break;
    case 'W':
        risk = 2;
        if (wind >= 30) {
            risk++;
            reason = "ветер >= 30";
        }
        break;
    default:
        cout << "Неверный код явления" << endl;
        return 1;
    }
    if (risk > 3) risk = 3;
    string level;
    if (risk == 1) level = "Low";
    else if (risk == 2) level = "Medium";
    else level = "High";
    cout << "Уровень риска: " << risk << " (" << level << ")" << endl;
    cout << "Причина повышения: " << reason << endl;
    return 0;
}
