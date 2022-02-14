#include <iostream>
#include <vector>
using namespace std;

int func1(int a, int b)
{
	return a+b;
}

int func2(int a, int b)
{
	return a - b;
}

int func3(int a, int b)
{
	return a * b;
}

int func4(int a, int b)
{
	return a / b;
}

void compute(int a, int b, int (*p)(int, int))
{
	cout << p(a, b) << endl;
}

int main()
{
	typedef int (*func)(int a, int b);
	vector<func>ans = { func1,func2,func3,func4 };
	for (auto s : ans)
	{
		compute(2, 3, s);
	}

	system("pause");
	return 0;
}





