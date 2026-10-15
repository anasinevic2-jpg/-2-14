#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double t, v;
	cout << "Введите температуру воздуха:";
	cin >> t;
	cout << "Введите скорость воздуха:";
	cin >> v;
	if (v < 0) {
		cout << "Ошибка: скорость ветра не может быть отрицательной";
	}
	else if (t < -20 && v >= 10) {
		cout << "Опасный холод";
	}
	else if (t < -20 && v < 10) {
		cout << "Сильный холод";
	}
	else if (t >= -20 && v >= 20) {
		cout << "Ветрено";
	}
	else {
		cout << "Обычные условия";
	}
	return 0;
}