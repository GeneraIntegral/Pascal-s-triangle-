//Dmitrieva_Olesya_Andreevna_SBD211

#include <windows.h> //���������� ������� ����-�����
#include <iostream>  //����-����� ������
#include <cmath>     //���������� ���������� �������������� ��������
#include <conio.h>   //����������� getch

using namespace std;
double Cnk(int N, int K)
{
	return ((N < K) ? 0 : ((K == 0) ? 1 : ((N - K + 1) / double(K) * Cnk(N, K - 1)))); //������� ��������
}
int main()
{
	setlocale(0, "");     int n;
	cout << "------------------------------------------------------------- \n";
	cout << "������ #1 [����������� �������]                               \n";        cout << endl;
	cout << "������� �� ����� ����������� �������.                         \n";
	cout << "------------------------------------------------------------- \n";
	cout << "������� ���������� ����� � ������������: ";
	cin >> n;                                                                          //���� ���������� ����� ������������
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < j; i++)
			cout << Cnk(j, i) << "  ";                                                 //����� ��������� �� �����
		cout << "\n";
	}
	return 0;
}