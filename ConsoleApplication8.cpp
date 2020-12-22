#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <vector>
using namespace std;
int main()
{
	int n;
	vector <int> v;
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество бочек: ";
	cin >> n;
	int i = 0;
	int number = 0;
	string dummy;
	while (i < n) {
		cout << "Нажмите любую клавишу, чтобы вытянуть бочонок: ";
		cin >> dummy;
		do {
			number = rand() % n;
		} while (find(v.begin(), v.end(), number) != v.end());
		v.push_back(number);
		cout << "Число на бочонке: " << number + 1 << endl;
		i++;
	}
	cout << "Все бочонки были вытащены";
}