#include <iostream>

/*function:recursion calculate factorial*/
//int F(int n);
//int main()
//{
//	int num = 0;
//	std::cout << "Please input a number: ";
//	std::cin >> num;
//	std::cout<<F(num);
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//
//int F(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return F(n - 1) * n;
//	}
//}

/**/
int F(int num);
int main()
{
	int num = 0;
	std::cout << "input a number: ";
	std::cin>>num;
	std::cout << F(num);
	system("pause");
	return EXIT_SUCCESS;
}

int F(int num)
{
	int sum = 1;
	while (num)
	{
		sum *= num;
		num--;
	}
	return sum;
}