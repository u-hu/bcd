#include<iostream>
using namespace std;
int main()
{
	int year, month , day;
	int i = 0, day1 = 0, week;
	int m1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int m2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << "�����������գ�" << endl;
	cin >> year >> month >> day;
	if (month == 1)
	{
		day1 = day;
		if (day > 0 && day < 8)
			week = 1;
		else
		{
			if ((day1 % 7) == 0)
				week = day1 / 7;
			else
				week = day1 / 7 + 1;
		}
		cout << "�����" << week << "��" << "�����" << day1 << "��" << endl;
	}
	else
	{
		
		if (((year % 4 == 0) && (year % 400 != 0)) || (year % 400 == 0))
		{
			/* "����������" */
			for (; i < (month-1); i++)
			{
				day1 = day1 + m1[i] ;
			}
			day1 = day1 + day;
			if ((day1 % 7) == 0)
				week = day1 / 7;
			else
				week = day1 / 7 + 1;
			cout << "�����" << week << "��" << "�����" << day1 << "��" << endl;
		}
		else
		{

			/* "���겻������" */
			for (; i < (month-1); i++)
			{
				day1 = day1 + m2[i] ;
			}
			day1 = day1 + day;
			if ((day1 % 7) == 0)
				week = day1 / 7;
			else
				week = day1 / 7 + 1;
			cout << "�����" << week << "��" << "�����" << day1 << "��" << endl;
		}
	}
    system("pause");
	return 0;
}