#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	double s, h;
	cout << "���������ߵ�ֵ��"<< endl;
	cin >> a >> b >> c;
	if ((a + b )> c&&(a + c) > b&&(b + c) > a)
	{
		h = 1.0 / 2 * (a + b + c);
		s = sqrt(h*(h - a)*(h - b)*(h - c));
		cout <<"���Ϊ"<< s << endl;
	}
	else
		cout << "�������޷�����������" << endl;
	system("pause");
	return 0;
}
