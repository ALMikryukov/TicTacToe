#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
char kletki[9] = { ' ',' ',' ',' ',' ',' ',' ',' ','*', };
//const int n = 15;
//char* month_name(int k)
//{
//	static char* name[] = { "-","������","�������","����","������","���","����","����","������","��������","�������","������","�������" };
//
//
//
//	return(k < 1 || k>12) ? name[0] : name[k];
//
//}


char check()
{

	//�������� �� ������
	if (kletki[0] == kletki[1] && kletki[0] == kletki[2])
	{
		cout << "������!";
	}
	else if (kletki[3] == kletki[4] && kletki[3] == kletki[5])
	{
		cout << "������!";
	}
	else if (kletki[6] == kletki[7] && kletki[6] == kletki[8])
	{
		cout << "������!";
	}
	//�������� �� ��������
	if (kletki[0] == kletki[3] && kletki[0] == kletki[6])
	{
		cout << "������!";
	}
	else if (kletki[1] == kletki[4] && kletki[1] == kletki[7])
	{
		cout << "������!";
	}
	else if (kletki[2] == kletki[5] && kletki[2] == kletki[8])
	{
		cout << "������!";
	}
	//�������� �� ����������
	if (kletki[0] == kletki[4] && kletki[0] == kletki[8])
	{
		cout << "������!";
	}
	else if (kletki[2] == kletki[4] && kletki[2] == kletki[6])
	{
		cout << "������!";
	}
	else {
		cout << "����������";
	}
	return 0;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char Stroka[7] = { 'H','E','L','L','O','!',};
	for (int i = 0; i < 6; i++)
	{
		cout << Stroka[i];
	}
	cout << endl;
	cout << Stroka << "\t";*/

	/*har Str[255] = { "HELLO WORLD!" };
	cout << Str << endl;

	cout << strlen(Str) << endl;
	string line = "���� ����!";
	line += "�����!";
	line += Str;
	cout << line << endl;
	string line2;
	cin >> line2;
	cout <<"����� ������ ���������� - "<< line2.length()<<" ������ -�/-��" << endl;*/
	//char* month_name(int);
	///---------------------------------------------------------------------------------------------------------------------------/
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "����� �����" << i << " - " << month_name(i) << endl;
	//}



	int kletka;
	int kletka1;
	cout << "������, �� ������� � ���� ""�������� ������""! ����� ����� �� ������ 2 ����(���� �1 - ������ ������; ���� �2 - ������� ����)";

	cout << "------------" << "\n" << endl;
	cout << "������ ������:" << endl;
	cout << 1 << '|' << 2 << '|' << 3 << "|" << endl;
	cout << 4 << '|' << 5 << '|' << 6 << "|" << endl;
	cout << 7 << '|' << 8 << '|' << 9 << "|" << "\n" << endl;


	cout << "������� ���� (* - �����):" << endl;
	cout << kletki[0] << '|' << kletki[1] << '|' << kletki[2] << "|" << endl;
	cout << kletki[3] << '|' << kletki[4] << '|' << kletki[5] << "|" << endl;
	cout << kletki[6] << '|' << kletki[7] << '|' << kletki[8] << "|" << "\n" << endl;

	cout << "------------\n" << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << "������� ����� ������, ���� ������  X: ";
		cin >> kletka;
		kletki[kletka - 1] = 'X';

		cout << kletki[0] << '|' << kletki[1] << '|' << kletki[2] << "|" << endl;
		cout << kletki[3] << '|' << kletki[4] << '|' << kletki[5] << "|" << endl;
		cout << kletki[6] << '|' << kletki[7] << '|' << kletki[8] << "|" << "\n" << endl;
		check();

		cout << "������� ����� ������, ���� ������  O: ";
		cin >> kletka;
		kletki[kletka - 1] = 'O';

		cout << kletki[0] << '|' << kletki[1] << '|' << kletki[2] << "|" << endl;
		cout << kletki[3] << '|' << kletki[4] << '|' << kletki[5] << "|" << endl;
		cout << kletki[6] << '|' << kletki[7] << '|' << kletki[8] << "|" << "\n" << endl;
		check();

		system("pause");
		return 0;
	}
}