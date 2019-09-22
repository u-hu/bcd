#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	double s, h;
	cout << "请输入三边的值："<< endl;
	cin >> a >> b >> c;
	if ((a + b )> c&&(a + c) > b&&(b + c) > a)
	{
		h = 1.0 / 2 * (a + b + c);
		s = sqrt(h*(h - a)*(h - b)*(h - c));
		cout <<"面积为"<< s << endl;
	}
	else
		cout << "此三边无法构成三角形" << endl;
	system("pause");
	return 0;
}
