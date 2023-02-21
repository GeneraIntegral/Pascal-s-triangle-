//Dmitrieva_Olesya_Andreevna_SBD211

#include <windows.h> //подключить русский ввод-вывод
#include <iostream>  //ввод-вывод данных
#include <cmath>     //библиотека выполнения математических операций
#include <conio.h>   //подключение getch

using namespace std;
double Cnk(int N, int K)
{
	return ((N < K) ? 0 : ((K == 0) ? 1 : ((N - K + 1) / double(K) * Cnk(N, K - 1)))); //Функция рекурсии
}
int main()
{
	setlocale(0, "");     int n;
	cout << "------------------------------------------------------------- \n";
	cout << "Задача #1 [Треугольник Паскаля]                               \n";        cout << endl;
	cout << "Вывести на экран треугольник Паскаля.                         \n";
	cout << "------------------------------------------------------------- \n";
	cout << "Введите количество строк в треугольнике: ";
	cin >> n;                                                                          //Ввод количества строк треугольника
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < j; i++)
			cout << Cnk(j, i) << "  ";                                                 //Вывод элементов на экран
		cout << "\n";
	}
	return 0;
}