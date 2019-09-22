#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	double d, e;
	double x, x1, x2;
	cout <<"ÇëÊäÈëa,b,cµÄÖµ£º"<<endl;
	cin >> a >> b >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "error" << endl;
		}
		else
		{
			x = (- c) / b;
			cout << "x= " << x << endl;
		}
	}
	else
	{
		d = b * b - 4 * a * c;
		if (d >= 0)
		{
			e = sqrt(d);
			x1 = (-b + e) / (2 * a);
			x2 = (-b - e)/ (2 * a);
			cout << "x1=" << x1 << endl;
			cout << "x2=" << x2 << endl;
		}
		else
		{
			d = 4 * a * c - b * b;
			e = sqrt(d);
			double p,q;
			p = -b / (2 * a);
			q = e / (2 * a);
	
			cout <<"x1="<< p << "+" << q<<"i" <<endl;
			cout <<"x2="<< p << "-" << q<<"i" << endl;
		}

	}
	system("pause");
	return 0;
	
}