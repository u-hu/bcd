#include<iostream>
#include<iomanip>
using namespace std;
int digit(int n);
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	a = a + c;
	f + f + 2 * a;
	cout.precision(digit((int)(f)) + 1);
	cout << "c=" << c << " a=" << a << " f=" << f << endl;
	system("pause");
	return 0;
}
int digit(int n)
{
	int d = 0;
	do
	{
		n = n / 10;
		d++;
	} while (n);
	return d;
}