﻿#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(0, ".1251");
	int a;
	cout << "Ваша оцiнка: ";
	cin >> a;
	if (a > 0 && a < 50) cout << "Незадовiльно";
	else if (a >= 50 && a < 70) cout << "Задовiльно";
	else if (a >= 70 && a < 90) cout << "Добре";
	else if (a >= 90 && a <= 100) cout << "Вiдмiнно";
	else {
		cout << "Не вірне значення" << endl;
	}
	return 0;	
}