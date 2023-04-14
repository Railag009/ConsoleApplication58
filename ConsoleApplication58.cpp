// C:\Users\263\source\repos\ConsoleApplication57\111.txt

#include<iostream>
#include<fstream>
using namespace std;

int f1(int n, string s)
{
	ifstream f;
	f.open(s);

	int max = 0;

	while (!f.eof() && f >> n)
	{

		if (n >= max)
			max = n;

	}

	return max;

}

int f2(int max, string s)
{
	int n;
	ifstream f;
	f.open(s);

	int a = 0;

	while (!f.eof() && f >> n)
	{

		if (n == max)
			a += 1;

	}

	if (a - 1 % 2 == 0)
	{
		return a;
	}
	else
	{
		return (a - 1);
	}

}

int arr(int l, int n, int max)
{

	int* a = new int;
	int i = 0;

	while (i = l, i < n + l, i++)
	{
		a[i] = max;
	}

}

int main()
{
	cout << "Name: ";

	ifstream f;
	string s;
	cin >> s;
	f.open(s);

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}

	int n;
	int sum;
	int y;
	int x = 0;
	bool flag = true;

	while (!f.eof() && f >> n)
	{

		int max = f1(n, s);

	}

	cout << "Enter number - ";
	cin >> y;



	cout << "X = " << x;
}
